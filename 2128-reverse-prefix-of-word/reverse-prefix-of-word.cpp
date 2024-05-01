class Solution {
public:
    string reversePrefix(string word, char ch) {
         int index = word.find(ch);
        if (index == string::npos) {
            return word; // Character not found, return original word
        } else {
            reverse(word.begin(), word.begin() + index + 1);
            return word;
        }
    }
};