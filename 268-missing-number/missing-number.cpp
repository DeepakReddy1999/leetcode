class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int rsum=n*(n+1)/2;
        int psum=0;

        for(int i=0;i<nums.size();i++){
            psum+=nums[i];
        }
        int ans=rsum-psum;

        return ans;
    }
};