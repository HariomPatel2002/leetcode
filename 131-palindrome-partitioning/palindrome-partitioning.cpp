class Solution {
public:
bool isPalindrome(const string& str, int start, int end) {
        while (start < end) {
            if (str[start++] != str[end--]) {
                return false;
            }
        }
        return true;
    }
    
    void partitionHelper(const string& s, int start, vector<string>& path, vector<vector<string>>& result) {
        if (start == s.size()) {
            result.push_back(path);
            return;
        }
        
        for (int i = start; i < s.size(); i++) {
            if (isPalindrome(s, start, i)) {
                path.push_back(s.substr(start, i - start + 1));
                partitionHelper(s, i + 1, path, result);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> path;
        partitionHelper(s, 0, path, result);
        return result;
    }
};