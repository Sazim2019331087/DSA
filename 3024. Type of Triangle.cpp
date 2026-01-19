class Solution {
public:
    string triangleType(vector<int>& nums) {
        string ans;
        int s1 = nums[0];
        int s2 = nums[1];
        int s3 = nums[2];
        if((s1+s2 > s3) && (s3+s2 > s1) && (s3+s1 > s2))
        {
            if(s1==s2 && s2==s3 && s1==s3)
            {
                ans = "equilateral";
            }
            else if((s1==s2 && s1!=s3 && s2!=s3) || (s3==s2 && s2!=s1 && s3!=s1) || (s1==s3 && s1!=s2 && s3!=s2))
            {
                ans = "isosceles";
            }
            else
            {
                ans = "scalene";
            }
        }
        else
        {
                ans = "none";
        }

        return ans;
    }
};
