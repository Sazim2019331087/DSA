class Solution {
public:
    int firstUniqChar(string s) {
        int storage[26] = {0};
        for (char &i:s)
        {
            storage[i-'a']++;
        }
        for (int i=0;i<s.size();i++)
        {
            if(storage[s[i]-'a'] == 1)
            {
                return i;
            }
        }

        return -1;
    }
};
