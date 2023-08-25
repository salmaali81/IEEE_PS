class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>f1(26);
        vector<int>f2(26);
        for(auto i : s)
        {
            f1[i-97]++;
        }
        for(auto i : t)
        {
            f2[i-97]++;
        }
        bool c=true;
        for(char i ='a'; i<='z';i++)
        {
            if(f1[i-97]!=f2[i-97]) c=false;
        }
        return c;
    }
};
