class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int runningSum=0;
        int maxSum=INT_MIN;
        for(int i=0;i<nums.size();i++){
           runningSum+=nums[i];
           
           maxSum=max(runningSum,maxSum);
            if(runningSum<0){
            runningSum=0;
           }
          
        }
        return maxSum;
    }
};