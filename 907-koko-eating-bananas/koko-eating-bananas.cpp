class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mini = 1; 
        int maxi = *max_element(piles.begin(), piles.end()); 
      
        while(mini < maxi) {
            int mid = mini + (maxi - mini) / 2;
            int hours = 0;
            
            for(int i : piles) {
                hours += (i + mid - 1) / mid; 
            }
            
            if (hours <= h) {
                maxi = mid; // Try to minimize the speed
            } else {
                mini = mid + 1; // Increase the speed because current speed is too slow
            }
        }
        
        return mini; // Return the smallest valid speed
    }
};
