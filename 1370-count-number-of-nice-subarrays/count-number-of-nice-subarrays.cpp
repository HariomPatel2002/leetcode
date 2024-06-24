class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int oddcount = 0;
        int count = 0;
        unordered_map<int, int> mpp;
        mpp[0] = 1; // Initialize the map with base case (0 odd count has been seen once)     
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 1) {
                oddcount++;
            }
            // If oddcount >= k, count the number of valid subarrays
            if (oddcount >= k) {
                count += mpp[oddcount - k];
            }
            // Update the map to include the current oddcount
            mpp[oddcount]++;
        }
        
        return count;
    }
};