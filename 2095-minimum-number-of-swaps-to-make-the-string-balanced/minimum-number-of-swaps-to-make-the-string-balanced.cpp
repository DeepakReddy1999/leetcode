class Solution {
public:
    int minSwaps(string s) {
        int imbalance = 0;
        int maxImbalance = 0;

        for (char c : s) {
            if (c == '[') {
                imbalance--;
            } else {
                imbalance++;
            }
            
            if (imbalance > maxImbalance) {
                maxImbalance = imbalance;
            }
        }


        return (maxImbalance + 1) / 2;
    }
};