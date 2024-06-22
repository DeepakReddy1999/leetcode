
class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<long long, int> mp; // Use long long for the key type
        int max_len = 0;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            if (sum == k) {
                max_len = i + 1;
            }

            if (mp.find(sum - k) != mp.end()) {
                max_len = max(max_len, i - mp[sum - k]);
            }

            if (mp.find(sum) == mp.end()) {
                mp[sum] = i;
            }
        }

        return max_len;
    }
};