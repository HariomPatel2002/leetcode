class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int sum = 0; // total satisfied customers without using the technique
        
        // Calculate sum of satisfied customers without using the technique
        for (int i = 0; i < n; ++i) {
            if (grumpy[i] == 0) {
                sum += customers[i];
            }
        }
        
        // Use sliding window to find the maximum additional satisfied customers we can gain
        int extra_satisfied = 0;
        int max_extra_satisfied = 0; // maximum additional satisfied customers we can gain
        
        for (int i = 0; i < n; ++i) {
            if (grumpy[i] == 1) {
                extra_satisfied += customers[i];
            }
            // Slide the window of size 'minutes'
            if (i >= minutes && grumpy[i - minutes] == 1) {
                extra_satisfied -= customers[i - minutes];
            }
            // Update max extra_satisfied
            if (i >= minutes - 1) {
                max_extra_satisfied = max(max_extra_satisfied, extra_satisfied);
            }
        }
        
        // Total maximum satisfied customers
        return sum + max_extra_satisfied;
    }
};