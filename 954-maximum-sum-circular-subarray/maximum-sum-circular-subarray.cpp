class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n= nums.size();

        int maxSum=nums[0],currMax=nums[0],totalSum=nums[0],minSum=nums[0],currMin=nums[0];
        for(int i=1;i<n;i++){
            currMax=max(nums[i],currMax+nums[i]);
            maxSum=max(maxSum,currMax);

            currMin=min(nums[i],currMin+nums[i]);
            minSum=min(minSum,currMin);

            totalSum+=nums[i];
        }
        if(maxSum<0){
            return maxSum;
        }
        return max(maxSum,totalSum-minSum);
    }
};