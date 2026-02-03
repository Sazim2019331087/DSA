class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int sum = 0;
        for(auto i:hours)
        {
            if(i>=target) sum++;
        }
        return sum;
    }
};
