class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        vector<int> arr;

        for (int num : nums) {
            if (s.find(-num) != s.end()) { 
                arr.push_back(num);
            }
        }

        if (arr.empty()) {
            return -1;
        }

        return *std::max_element(arr.begin(), arr.end());
    }
};