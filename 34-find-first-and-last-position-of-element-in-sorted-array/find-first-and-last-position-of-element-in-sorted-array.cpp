class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int t1 =-1,t2=-1;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i]==target){
               t1 = i;
               break;
            }
        }
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]==target){
                t2 = i;
                break;
            }
        }
        return {t1,t2};
    }
};