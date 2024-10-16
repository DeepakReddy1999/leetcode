class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> store (32,0);
        for(int i=0;i<32;i++){
            for(int num:nums){
                store[i]+=(num>>i)&1;
            }
        }
        for(int i=0;i<32;i++){
            store[i]=store[i]%3;
        }
        int ans=0;
        for(int i=0;i<32;i++){
            ans+=(store[i]<<i);
        }
        return ans;

    }
};