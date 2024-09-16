class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int ans=0;
        int len=s.length();
        vector<int> cnt(128,0);
        
        while(left<len){
            cnt[s[left]]++;
            while(cnt[s[left]]>1){
                cnt[s[right]]--;
                right++;
            }
            left++;
            ans=max(ans,left-right);
        }
        return ans;
    }
};