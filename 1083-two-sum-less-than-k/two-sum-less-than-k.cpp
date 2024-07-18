class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        int ans=0;
        while(i<j){
            if(nums[i]+nums[j]<k){
                ans=max(ans,nums[i]+nums[j]);
                i++;
            }else{
                j--;
            }

        }
        return ans==0?-1:ans;
    }
};