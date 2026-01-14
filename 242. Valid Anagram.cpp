class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> storage(26,0);
        for(int i=0;i<s.size();i++)
        {
            ++storage[s[i]-'a'];
            --storage[t[i]-'a'];
        }
        bool answer = true;        
        for(int i=0;i<26;i++)
        {
            if(storage[i]<0)
            {
                answer = false;
                break;
            }
        }
        return answer;
    }
};
