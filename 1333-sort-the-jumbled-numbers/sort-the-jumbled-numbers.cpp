class Solution {
       vector<int>mapss;
    int reverse(int num) {
    if(num == 0) return mapss[num];

    int reversedNum = 0;
    int hh=0;
    while(num != 0) {
        int digit = num % 10; 
        reversedNum = reversedNum + pow(10,hh) * mapss[digit]; 
        num /= 10; 
        hh++;
    }

    return reversedNum;
}
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        mapss = mapping;
        unordered_map<int,int>mpp;
        vector<int>arr;
        for(auto it :nums){
             mpp[it]=reverse(it);
        }
        sort(nums.begin(),nums.end(),[&] (int a,int b){
            return mpp[a] < mpp[b];
        });
        return nums;
    }
};