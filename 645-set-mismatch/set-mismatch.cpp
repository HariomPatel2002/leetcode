class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n= nums.size();
    vector<int>vis(n+1,0);
    for(auto it :nums){
        vis[it]++;
    }
    vector<int>ans;
    int v1,v2;
    for (int i = 1; i <= n; i++)
    {
        if(vis[i]==2){
            v1 = i;
        }
        if(vis[i]==0){
            v2 = i;
        }
    }
        return {v1,v2};
    }
};