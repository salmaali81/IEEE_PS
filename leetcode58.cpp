class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' and c==0) continue;
            else if(s[i]==' ') break;
            else c++;
        }
        return c;
    }
};
