class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int i=0,j=0;
        int ans=0;
        int n=nums.size();
        multiset<int> ms;
        while(j < n){
           
           ms.insert(nums[j]);
           
           while(*ms.rbegin()-*ms.begin() > limit){
            ms.erase(ms.find(nums[i]));
            i++;
           }

           ans=max(ans,j-i+1);
           j++;
             
        }
        return ans;
    }
};