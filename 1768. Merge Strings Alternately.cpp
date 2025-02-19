class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        string ans="";
        if(n1>=n2)
        {
            for(int i=0;i<n2;i++)
            {
                ans+=word1[i];
                ans+=word2[i];
            }
            for(int i=n2;i<n1;i++)
            {
                ans+=word1[i];
            }
        }
        else
        {
            for(int i=0;i<n1;i++)
            {
                ans+=word1[i];
                ans+=word2[i];
            }
            for(int i=n1;i<n2;i++)
            {
                ans+=word2[i];
            }
        }

        return ans;
    }
};
