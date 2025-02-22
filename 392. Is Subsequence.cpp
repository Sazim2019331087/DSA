class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool ans = true;
        int i=0,j=0;
        while(i<s.size() && j<t.size())
        {
            if(j==t.size() || i==s.size())
            {
                break;
            }
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            if(s[i]!=t[j])
            {
                j++;
            }
        }
        if(i!=s.size())
        {
            ans = false;
        }
        return ans;      
    }
};
