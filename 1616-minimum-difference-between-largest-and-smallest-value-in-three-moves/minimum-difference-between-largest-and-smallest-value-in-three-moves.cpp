class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4) return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int mvalue = INT_MAX;
        mvalue = min(mvalue,nums[n-4]-nums[0]);
        mvalue = min(mvalue,nums[n-1]-nums[3]);
        mvalue = min(mvalue,nums[n-2]-nums[2]);
        mvalue = min(mvalue,nums[n-3]-nums[1]);

        return mvalue;
    }
};