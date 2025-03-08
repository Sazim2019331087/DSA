class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int ans=-1,left=0,right=0;
        for(auto i:nums)
        {
            right+=i;
        }
        for(int i=0;i<n;i++)
        {
            right-=nums[i];
            if(left!=right)
            {
                left+=nums[i];
            }
            else
            {
                ans =i;
                break;
            }
        }
        return ans;
    }
};
