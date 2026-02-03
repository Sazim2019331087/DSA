class Solution {
public:
    int digitSum(int n)
    {
        int sum = 0;
        while(n!=0)
        {
            sum += n%10;
            n = n/10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        for(auto i:nums)
        {
            sum1+=i;
        }
        int sum2 = 0;
        for(auto i:nums)
        {
            sum2+=digitSum(i);
        }
        return abs(sum2-sum1);


    }
};
