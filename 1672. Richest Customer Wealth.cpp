class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m,n;
        m = accounts.size();
        n = accounts[0].size();
        int msum = 0;
        for(auto i:accounts)
        {
            int sum = 0;
            for(auto j:i)
            {
                sum+=j;
            }
            msum = max(sum,msum);
        }
        return msum;
    }
};
