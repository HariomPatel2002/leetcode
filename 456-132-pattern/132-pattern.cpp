class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       if (nums.size() < 3) {
            return false;
        }
        stack<int> s;
        int candidate_k = INT_MIN; // This will be nums[k]
        for (int i = nums.size() - 1; i >= 0; --i) {
            // Case 1: nums[i] is a valid candidate for nums[j]
            if (nums[i] < candidate_k) {
                return true;
            }
            // Case 2: nums[i] could be a candidate for nums[k]
            while (!s.empty() && s.top() < nums[i]) {
                candidate_k = s.top();
                s.pop();
            }
            // Push nums[i] (nums[j]) onto the stack
            s.push(nums[i]);
        }
        return false;
    }
};