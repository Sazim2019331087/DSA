class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int fibos[100];
        fibos[0] = 0;
        fibos[1] = 1;
        for(int i=2;i<=n;i++)
        {   
            fibos[i] = fibos[i-1]+fibos[i-2];
        }
        return fibos[n];
    }
};
