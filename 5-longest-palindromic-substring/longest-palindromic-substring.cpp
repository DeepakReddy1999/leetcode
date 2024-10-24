class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0;
        int maxLen=1;
        
        for(int i=0;i<n;i++){
            int l1=erc(s,i,i);
            int l2=erc(s,i,i+1);
            int currlen =max(l1,l2);
            if(currlen > maxLen){
                maxLen=currlen;
                start = i-(currlen-1)/2;
            }

        }
        return s.substr(start,maxLen);
    }

    int erc(string s,int left,int right){
   
           while(left>=0 && right<s.size() && s[left]==s[right] ){
            left--;
            right++;
           
           }
           return right-left-1;

    }
};