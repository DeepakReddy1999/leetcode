class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us;
        unordered_map<int,int> mp;
        for(int i:nums1){
            mp[i]++;
        }
        for(int i:nums2){
            if(mp.find(i)!=mp.end()){
                us.insert(i);
            }
        }
        vector<int> ans;
        for(int i:us){
            ans.push_back(i);
        }
        return ans;
    }
};