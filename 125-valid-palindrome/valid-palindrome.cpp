class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) return true; // Empty string is considered a palindrome
        
        string str;
        for (auto it : s) {
            if (std::isalnum(it)) { // Check if it is alphanumeric
                str += std::tolower(it); // Convert to lowercase and add to str
            }
        }
        int low = 0;
    int high = str.size() - 1;
    while (low < high) {
        if (str[low] != str[high]) {
            return false; // not a palindrome.
        }
        low++; // move the low index forward
        high--; // move the high index backwards
    }
      return true; 
    }
};