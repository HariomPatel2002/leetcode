class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>s;
        vector<int>arr;
        for(auto it:nums){
            s.insert(it);
        }
        for(auto it :nums){
            if(s.find(-it)!=s.end()){
                arr.push_back(it);
            }
        }
        if(arr.empty()){
            return -1;
        }
        int m = INT_MIN;
        for(auto it :arr){
            if(it>m){
                m = it;
            }
        }
        return m;
    }
};