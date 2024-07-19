class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long ans=0;
        long long count=0;
        long long number=1;
        long long n=nums.size();
        int left=0,right=0;
        for(right=0;right<n;right++){
            count+=nums[right];

            while(count*(right-left+1) >=k){
                count-=nums[left];
                left++;
            }
            ans+=(right-left+1);
        }
        return ans;
    }
};