class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        int result[450];
        string ans="";
        if((n1==1 && num1[0]=='0')||(n2==1 && num2[0]=='0'))
        {
            ans="0";
        }
        else
        {
            for(int i=0;i<n1+n2;i++)
            {
                result[i]=0;
            }
            for(int i=n1-1;i>=0;i-- )
            {
                for(int j=n2-1;j>=0;j--)
                {
                    int p = (int)(num1[i]-'0')*(int)(num2[j]-'0');
                    int pos = i+j;
                    int x = result[pos+1];
                    int sum = p+x;
                    result[pos+1] = sum%10;
                    result[pos] += sum/10;
                }
            }
            int w = 0;
            while(w<n1+n2 && result[w]==0)
            {
                w++;
            }
            for(int q=w;q<n1+n2;q++)
            {
                ans+=(result[q]+'0');
            }
        }
        return ans;
    }
};
