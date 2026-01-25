class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sum = 1;
        for(auto i:nums)
        {
            if(i>0)
            {
                sum*=1;
            }
            else if(i<0)
            {
                sum*=(-1);
            }
            else
            {
                sum*=0;
            }
        }
        return sum;
    }
};
