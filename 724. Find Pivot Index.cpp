class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int ans=-1;
        int right = accumulate(nums.begin(),nums.end(),0);
        int left = 0 ;
        for(int i=0;i<n;i++)
        {
            right-=nums[i];
            if(right!=left)
            {
                left+=nums[i];
            }
            else{
               ans = i;
               break;
            }
        }
        return ans;
    }
};
