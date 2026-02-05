class Solution {
public:
    bool isPalindrome(string s)
    {
        string s1 = "";
        for(int i = s.size()-1 ; i>=0;i--)
        {
            s1+=s[i];
        }
        if(s==s1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    string firstPalindrome(vector<string>& words) {
        string ans;
        for(auto i:words)
        {
            if(isPalindrome(i)==true)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};
