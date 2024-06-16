class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>mpp(128,0);
        for(auto it :s){
            mpp[it]++;
        }
        int count=0;
        bool m = false;
        for(auto it :mpp){
            if(it%2==0){
                count+=it;
            }
            else {
               count += it-1;
               m = true;
            }
        }
        if (m) {
            count += 1;
        }
        return count;
    }
};