class Solution {
public:
    int check_vowel(char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            return 1;
        }
        return 0;
    }
    int maxVowels(string s, int k) {
        int n = s.size();
        int max_vowel = 0,ans=0,cur_vowel=0;
        for(int i=0;i<k;i++)
        {
            cur_vowel+=check_vowel(s[i]);
        }
        ans = cur_vowel;
        for(int i=k;i<n;i++)
        {
            cur_vowel+=check_vowel(s[i]);
            cur_vowel-=check_vowel(s[i-k]);
            ans = max(ans,cur_vowel);
        }
        return ans;
    }
};
