class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long result=0;
        for(int num:nums){
            result^=num;
        }
        long long setbit=result & -result;
        int num1=0,num2=0;
        for(int num:nums){
            if(num & setbit){
                num1^=num;
            }else{
                num2^=num;
            }
        }
        return {num1,num2};

    }
};