class Solution {
public:
    int binarysearch(vector<int>& potions, long long success,int spell){
        int low=0;
        int high=potions.size()-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(spell*1LL* potions[mid] >= success){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        int n=spells.size();
        int m=potions.size();
        sort(potions.begin(),potions.end());
        for(int i=0;i<n;i++){
            if(spells[i]*1LL*potions[m-1] < success){
                ans.push_back(0);
            }else{
                int index=binarysearch(potions, success, spells[i]);
                ans.push_back(m-index);
            }
        }
        return ans;
    }
};