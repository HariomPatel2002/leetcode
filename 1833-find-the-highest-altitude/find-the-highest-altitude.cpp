class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt = 0;
        int currentAlt = 0;
        
        for (int g : gain) {
            currentAlt += g;
            maxAlt = max(maxAlt, currentAlt);
        }
        
        return maxAlt;
    }
};