class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        mp[0]=1;
        int runningSum=0;
        int count=0;

        for(int num:nums){
            runningSum+=num;

            if(mp.find(runningSum-k)!=mp.end()){
                count+=mp[runningSum-k];
            }

            mp[runningSum]++;
        }
        return count;
    }
};