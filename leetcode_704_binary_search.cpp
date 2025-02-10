class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n_s= nums.size();
    
        //return n_s;
        int low = 0;
        int high = n_s - 1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return -1;
    }
};
