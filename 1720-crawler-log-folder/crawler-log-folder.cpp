class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count =0;
        for(int i=0; i<logs.size(); i++){
            string t = logs[i];
            if(t=="./"){
                continue;
            }
            else if(t=="../"){
                if(count!=0){
                count--;}
            }
            else{
                count++;
            }
        }
        return count;
    }
};