class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int numtofind= target-nums[i];

            if(mp.find(numtofind)!=mp.end()){
                return {mp[numtofind],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};