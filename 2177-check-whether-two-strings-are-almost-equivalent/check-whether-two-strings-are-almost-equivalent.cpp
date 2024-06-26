class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> count1(26,0);
        vector<int> count2(26,0);
        for(char c: word1){
            count1[c-'a']++;
        }
        for(char c: word2){
            count2[c-'a']++;
        }
        for( char c: word1){
            if(abs(count1[c-'a'] -count2[c-'a']) >3 ){
                return false;
            }
        }
        for(char c:word2){
            if(abs(count1[c-'a']-count2[c-'a'])> 3){
                return false;
            }
        }
        return true;
        
    }
};