class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        string vowels="";
        vector<int> pos;
        for(int i=0;i<n;i++)
        {
           if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')   
           {
             vowels+=s[i];
             pos.push_back(i);
           }
        }      
        reverse(pos.begin(),pos.end());
        for(int i=0;i<pos.size();i++)
        {
            s[pos[i]]=vowels[i];
        }
        return s;
    }
};
