class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
    }
    int ans=0;
        for(auto it:mp){
            if (mp.find(it.first - k) != mp.end()) {
                ans += it.second * mp[it.first - k];
            }
            if (mp.find(it.first + k) != mp.end() && k != 0) { 
                ans += it.second * mp[it.first + k];
            }
        }
        return ans/2;
    }
};