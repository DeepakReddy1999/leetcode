class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us(nums1.begin(),nums1.end());
        unordered_set<int> intersection;
         for (int i : nums2) {
            if (us.find(i) != us.end()) {
                intersection.insert(i);
            }
        }
        
        return vector<int>(intersection.begin(), intersection.end());
    }
};