class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int>occurs;
        bool result = true;
        map<int,int>mp,mp2;
        for(auto i:arr)
        {
            mp[i]++;
        }
        
        for(auto i:mp)
        {
            mp2[i.second]++;
        }

        for(auto i:mp2)
        {
            if(i.second>1)
            {
                result=false;
                break;
            }
        }
        return result;
    }
};
