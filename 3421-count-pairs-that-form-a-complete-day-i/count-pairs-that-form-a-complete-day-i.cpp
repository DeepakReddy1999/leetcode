
class Solution {
public:
    int countCompleteDayPairs(std::vector<int>& hours) {
      
        std::vector<int> remainderCount(24, 0);
        for (int hour : hours) {
            int remainder = hour % 24;
            remainderCount[remainder]++;
        }

        int pairs = 0;
        for (int i = 1; i < 12; ++i) {
            pairs += remainderCount[i] * remainderCount[24 - i];
        }
        pairs += (remainderCount[0] * (remainderCount[0] - 1)) / 2;
        pairs += (remainderCount[12] * (remainderCount[12] - 1)) / 2;

        return pairs;
    }
};