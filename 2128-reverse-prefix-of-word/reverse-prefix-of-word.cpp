class Solution {
public:
    string reversePrefix(string word, char ch) {
         string str;
        int i = 0;
        for (auto it : word) {
            if (it == ch) {
                str += it;
                reverse(str.begin(), str.end());
                str += word.substr(i + 1); // Include the character 'ch'
                return str;
            }
            i++;
            str += it;
        }
        return word; //
    }
};