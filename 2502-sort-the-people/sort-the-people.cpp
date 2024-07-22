class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>str;
        unordered_map<int,string>mpp;
        for(int i=0; i<names.size(); i++){
            mpp[heights[i]] = names[i];
        }
        sort(heights.begin(),heights.end());
        for(auto it :heights){
            if(mpp.find(it)!=mpp.end()){
                str.push_back(mpp[it]);
            }
        }
        reverse(str.begin(),str.end());
        return str;
    }
};