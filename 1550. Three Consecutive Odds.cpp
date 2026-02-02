class Solution {
public:
    int isOdd(int x) {
        if (x % 2 != 0) {
            return 1;
        } else {
            return 0;
        }
    }
    bool threeConsecutiveOdds(vector<int>& arr) {
        bool ans = false;
        if (arr.size() >= 3) {
            int s = 0;
            for (int i = 0; i < arr.size()-2; i++) {
                s = isOdd(arr[i]) + isOdd(arr[i + 1]) + isOdd(arr[i + 2]);
                if (s == 3) {
                    ans = true;
                    break;
                } else {
                    s = 0;
                }
            }
        }

        return ans;
    }
};
