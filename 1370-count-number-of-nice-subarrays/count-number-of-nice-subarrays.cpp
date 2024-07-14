class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int &i:nums){
            i=i%2;
        }
        int count=0;
        int prefixsum=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int num:nums){
        prefixsum+=num;

        if(mp.find(prefixsum-k)!=mp.end()){
         count+=mp[prefixsum-k];
        }
        mp[prefixsum]++;

        }
        return count;
    }
};