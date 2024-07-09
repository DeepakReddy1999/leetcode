class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> charCount(128, 0);
        for (char c : t) {
            charCount[c]++;
        }

        int requiredChars = t.size(); 
        int start = 0;
        int end = 0; 
        int minWindowLength = INT_MAX;
        int minWindowStart = 0; 

        while (end < s.size()) {
           
            if (charCount[s[end++]]-- > 0) {
                requiredChars--;
            }

           
            while (requiredChars == 0) {
            
                if (end - start < minWindowLength) {
                    minWindowLength = end - (minWindowStart = start);
                }

                
                if (charCount[s[start++]]++ == 0) {
                    requiredChars++;
                }
            }
        }

       
        return minWindowLength == INT_MAX ? "" : s.substr(minWindowStart, minWindowLength);
    }
};