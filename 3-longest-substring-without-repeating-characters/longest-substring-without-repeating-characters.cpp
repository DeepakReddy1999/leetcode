class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0,j=0;
        int ans=0;
        unordered_map<char,int> mp;
        while(i<n && j<n){
            if(mp[s[j]]>=1){
             mp[s[i]]--;
             i++;

            }else{
                mp[s[j]]=1;
                j++;
                ans=max(ans,j-i);
            }
        }
        return ans;
    }
};