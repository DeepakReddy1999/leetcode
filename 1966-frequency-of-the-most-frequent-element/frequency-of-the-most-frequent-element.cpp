class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;
        int ans = 1;
        long long total = 0;
        sort(nums.begin(), nums.end());

        while (i < n) {
            total += nums[i];
            
            while ((nums[i] * (long long)(i - j + 1))-total > k) {
                total -= nums[j];
                j++;
            }
            
            ans = max(ans, i - j + 1);
            i++;
        }
        
        return ans;
    }
};