class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int zero = 0;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                ans.push_back(nums[i]);
            }
            if(nums[i]==0)
            {
                zero++;
            }
        }
        nums.clear();
        for(auto i:ans)
        {
            nums.push_back(i);
        }
        for(int i=0;i<zero;i++)
        {
            nums.push_back(0);
        }
    }
};
