class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0; // No primes less than 2

        vector<bool> prime(n, true); // Create a vector of size n, initialized to true
        
        prime[0] = prime[1] = false; // 0 and 1 are not primes

        for(int p=2;p*p<n;p++){
          if(prime[p]){
            for(int i=p*p;i<n;i+=p){
                prime[i]=false;
            }

          }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;
            }
        }
        return count;
    }
};