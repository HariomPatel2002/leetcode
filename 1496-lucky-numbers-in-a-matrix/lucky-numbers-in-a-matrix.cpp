class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
            unordered_set<int>minRow;
           for(int i =0; i<matrix.size(); i++){
            int mini = matrix[i][0];
            for(int j=0; j<matrix[0].size(); j++){
                mini = min(mini,matrix[i][j]);
            }
            minRow.insert(mini);
           }
           vector<int>arr;
           
           for(int i =0; i<matrix[0].size(); i++){
            int maxi = matrix[0][i];
            for(int j=0; j<matrix.size(); j++){
                maxi = max(maxi,matrix[j][i]);
            }
            if(minRow.find(maxi)!=minRow.end()){
            arr.push_back(maxi);
            }
           }
           return arr;
    }
};