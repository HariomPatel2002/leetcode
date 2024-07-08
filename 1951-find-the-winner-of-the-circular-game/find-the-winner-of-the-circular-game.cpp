class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>arr;
        for(int i=1; i<=n; i++){
            arr.push_back(i);
        }
        int ind =0;
        while(arr.size()>0){
            int next = (ind+k-1)%arr.size();
            arr.erase(arr.begin()+next);
            ind = next;
        }
        return arr[0];
    }
};