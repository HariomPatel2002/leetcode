class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr;
        unordered_map<int,int>mpp1;
        for(auto it :nums1){
            mpp1[it]++;
        }
        for(auto it :nums2){
            if(mpp1.find(it)!=mpp1.end() && mpp1[it]>0){
                arr.push_back(it);
                mpp1[it]--;
            }
        }
        return arr;
    }
};
