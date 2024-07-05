class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int, int>mp;
        int ans=0;
        for(auto i: time){
            int rem=i%60;
            int com=(60-rem)%60;
            if(mp.find(com)!=mp.end()){
                ans+=mp[com];
            }
            mp[rem]++;
        }
        return ans;
    }
};