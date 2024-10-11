class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
      vector<vector<int>> ans;
      intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());  
        int n = intervals.size();
        
       
        vector<int> temp = intervals[0];
        
        for(auto intraval : intervals) {
           
            if(temp[1] >= intraval[0]) {
                temp[1] = max(temp[1], intraval[1]);
            } else {
                ans.push_back(temp);  
                temp = intraval;     
            }
        }
        
        // Add the last interval
        ans.push_back(temp);
        
        return ans;  
    }
};