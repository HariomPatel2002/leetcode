class Solution {
public:
    bool backspaceCompare(string s, string t) {
       int p1 =-1;
       int p2 =-1;
       string t1,t2;
       for(auto i :s){
           if(i=='#' && p1>-1) p1--;
           else if(i!='#' ) s[++p1] =i;
       }
       for(auto i:t){
           if(i=='#' && p2>-1) p2--;
           else if(i!='#') t[++p2] = i;
       }
       if(p1!=p2) return 0;
        for(int i=0;i<=p1;i++){
            if(s[i]!=t[i]) return 0;
        }
        return 1;
    }
};