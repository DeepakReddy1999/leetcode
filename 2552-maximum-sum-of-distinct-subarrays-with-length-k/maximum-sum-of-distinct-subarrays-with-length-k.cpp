class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0;
        long long temp=0;
        unordered_map<int,int>mp;

        for(int i=0;i<k;i++){
            temp+=nums[i];
            mp[nums[i]]++;
        }
        if(mp.size()==k){
            ans=max(ans,temp);
        }
        for(int j=k;j<nums.size();j++){
            mp[nums[j-k]]--;
            mp[nums[j]]++;

            temp-=nums[j-k];
            temp+=nums[j];

            if(mp[nums[j-k]]==0){
                mp.erase(nums[j-k]);
            }
            if(mp.size()==k){
                ans=max(ans,temp);
            }
            
             
            
        }
        return ans;

    }
};