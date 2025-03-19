class Solution {
public:
    int lis[2501];
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                {
                    if(lis[j]+1>lis[i])
                    {
                        lis[i] = lis[j]+1;
                    }
                }
            }
        }
        sort(lis,lis+n);
        return lis[n-1]+1;
    }
};
