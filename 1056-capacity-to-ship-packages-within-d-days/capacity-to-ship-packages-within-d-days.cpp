class Solution {
public:
bool canShipWithCapacity(const vector<int>& weights, int capacity, int days) {
        int daysNeeded = 1;  
        int currentLoad = 0;

        for (int weight : weights) {
            if (currentLoad + weight > capacity) {
                daysNeeded++;
                currentLoad = 0;
            }
            currentLoad += weight;

            if (daysNeeded > days) return false;
        }

        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());  
        int high = accumulate(weights.begin(), weights.end(), 0);  

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (canShipWithCapacity(weights, mid, days)) {
                high = mid;  
            } else {
                low = mid + 1; 
                            }
        }

        return low; 
    }
};

