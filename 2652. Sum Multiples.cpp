class Solution {
public:
    bool divisibility(int n)
    {
        if(n%3==0 || n%5==0 || n%7==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int sumOfMultiples(int n) {
        int sum = 0;
        for(int i=1;i<=n;i++)
        {
            if(divisibility(i)==true)
            {
                sum+=i;
            }
        }
        return sum;
    }
};
