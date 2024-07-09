class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int> row;
        unordered_map<int,int> col;
         
        int n= matrix.size();
        int m= matrix[0].size();
        for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                   if(matrix[i][j]==0){
                       row[i]++;
                       col[j]++;
                   }
             }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row.find(i)!=row.end()){
                    matrix[i][j]=0;
                }
                if(col.find(j)!=col.end()){
                    matrix[i][j]=0;
                }
            }
        }
    }
};