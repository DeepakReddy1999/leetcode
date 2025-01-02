class Solution {
public:
    void findCombinations(vector<int>& candidates, int target, int index, vector<int>& temp, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {
         
            if (i > index && candidates[i] == candidates[i - 1]) continue;

            if (candidates[i] > target) break;

         
            temp.push_back(candidates[i]);

            findCombinations(candidates, target - candidates[i], i + 1, temp, ans);

          
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;       
        sort(candidates.begin(), candidates.end()); 
        findCombinations(candidates, target, 0, temp, ans); 
        return ans;
    }
};
