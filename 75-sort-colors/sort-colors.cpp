class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>arr0;
        vector<int>arr1;
        vector<int>arr2;
        vector<int>arr;
        for(auto it :nums){
            arr.push_back(it);
        }
        nums.clear();
        for(auto it :arr){
            if(it==0){arr0.push_back(it);}
            else if(it==1){arr1.push_back(it);}
            else {arr2.push_back(it);}
        }
        
        for(auto it :arr0){
            nums.push_back(it);
        }
        for(auto it :arr1){
            nums.push_back(it);
        }
        for(auto it :arr2){
            nums.push_back(it);
        }
        
        
    }
};