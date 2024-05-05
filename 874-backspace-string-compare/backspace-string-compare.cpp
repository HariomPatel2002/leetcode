class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
        for(auto it:s){
            if(!s1.empty() && it=='#'){
                s1.pop();
            }
            else if(s1.empty() && it=='#'){
                continue;
            }
            else{
                s1.push(it);
            }
        }
        for(auto it:t){
            if(!s2.empty() && it=='#'){
                s2.pop();
            }
            else if(s2.empty() && it=='#'){
                continue;
            }
            else{
                s2.push(it);
            }
        }
        string str1,str2;
        while(!s1.empty()){
            char k = s1.top();
            str1+=k;
            s1.pop();
        }
        while(!s2.empty()){
            char k = s2.top();
            str2+=k;
            s2.pop();
        }
        
        if(str1==str2) return true;
        else return false;
    }
};