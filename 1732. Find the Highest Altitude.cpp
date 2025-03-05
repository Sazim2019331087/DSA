class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int path  = 0;
        priority_queue<int>pq;
        pq.push(path);
        for(auto i:gain)
        {
            path+=i;
            pq.push(path);
        }
        return pq.top();
    }
};
