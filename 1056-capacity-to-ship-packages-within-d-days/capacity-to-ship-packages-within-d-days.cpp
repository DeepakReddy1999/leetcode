class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left=*max_element(weights.begin(),weights.end());
        int right=accumulate(weights.begin(), weights.end(),0);
        
        while(left<right){
            int mid=left+(right-left)/2;
            if(canship(weights,days,mid)){
                right=mid;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
    bool canship(vector<int>& weights, int days,int cap){
        int currentload=0;
        int requireddays=1;

        for(int weight:weights){
            if(currentload+weight > cap){
                requireddays++;
                currentload=0;
            }
            currentload+=weight;
        }
        return requireddays<=days;
    }
};