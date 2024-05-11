class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
       int l=0, r=arr.size()-1; // Corrected the initialization of r
        int k1=0;
        map<double,vector<int>>mpp;
         int n = arr.size();
        for (int l = 0; l < n; ++l) {
            for (int r = l + 1; r < n; ++r) {
                double fraction = static_cast<double>(arr[l]) / arr[r];
                mpp[fraction] = {arr[l], arr[r]};
            }
        }
        int cnt =1;
        for(auto it :mpp){
            if(cnt==k){
                return it.second;
            }
            cnt++;
        }
        return arr;
    }
};