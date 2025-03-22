class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for (int i = 0; i < nums.size() - 2; i++) {
            int a;
            if (i == 0 || (i > 0 && nums[i] != nums[i - 1])) {
                a = nums[i];
                int sum = 0 - a;
                int low = i + 1;
                int high = nums.size() - 1;
                while (low < high) {
                    int b = nums[low];
                    int c = nums[high];
                    if (b + c == sum) {
                        vector<int> triplet;
                        triplet.push_back(a);
                        triplet.push_back(b);
                        triplet.push_back(c);
                        ans.push_back(triplet);

                        while (low < high && b == nums[low + 1])
                            low++;
                        while (low < high && c == nums[high - 1])
                            high--;

                        low++;
                        high--;
                    } else if (b + c < sum)
                        low++;
                    else
                        high--;
                }
            }
        }
        return ans;
    }
};
