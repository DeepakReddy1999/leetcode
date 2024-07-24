class Solution {
public:
    int totalbits(int n){
        int count=0;
        while(n>0){
            count++;
            n=n>>1;
        }
        return count;
    }
    bool isPowerOfFour(int n) {
        int count=totalbits(n);
        return (n>0 && count%2==1 && (n&(n-1))==0);
        
        
    }
};