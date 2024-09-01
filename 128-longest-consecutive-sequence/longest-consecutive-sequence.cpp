class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),ans=0,c=1;
        unordered_set<int> st;

        for(int i=0 ;i<n ;i++) st.insert(nums[i]);

        for(int i=0;i<n;i++){
            if(st.find(nums[i]-1)==st.end()){
                int p= nums[i]+1;

                while(st.find(p) != st.end()){
                     p++;
                     c++;
                };
                ans=max(ans,c);
                c=1;
            }
        }
        return ans;

    }
};