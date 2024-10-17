class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int n=s.size();
        int i=0,j=0;
        unordered_map<char,int> mp;
        while(i<n && j<n){
            while(mp[s[i]]==1){
                mp[s[j]]--;
                 j++;
            }
            mp[s[i]]++;
            ans=max(ans,i-j+1);
            i++;


        }
        return ans;
    }
};