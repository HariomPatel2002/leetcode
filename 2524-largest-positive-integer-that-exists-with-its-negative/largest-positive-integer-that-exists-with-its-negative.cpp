class Solution {
public:
    int findMaxK(vector<int>& nums) {
        std::unordered_set<int> s(nums.begin(), nums.end()); // Store nums in a set
        std::vector<int> arr;

        for (int num : nums) {
            if (s.find(-num) != s.end()) { // Check if -num exists in the set
                arr.push_back(num); // Store num in arr if -num exists
            }
        }

        if (arr.empty()) {
            return -1;
        }

        return *std::max_element(arr.begin(), arr.end());
    }
};