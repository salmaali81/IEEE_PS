class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m2;
        for(int i=0; i<magazine.length();i++)
        {
            m2[magazine[i]]++;
        } 
        bool c=true;
        for(int i=0;i<ransomNote.length();i++)
        {
            if(m2[ransomNote[i]]==0)
            {
                c=false;
            }
            else{
                m2[ransomNote[i]]--;
            }
        }     
        return c;
    }
};
