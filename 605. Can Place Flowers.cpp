class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int bedSize = flowerbed.size();
        int l = 0;
        int r = 0;
        for(int i=0;i<bedSize;i++)
        {
            if(i!=0)
            {
                l = flowerbed[i-1];
            }
            if(i!=(bedSize-1))
            {
                r = flowerbed[i+1];
            }
             if(l+r+flowerbed[i]==0)
             {
                 flowerbed[i]=1;
                 n--;
             }
            
        }
        if(n<=0)
        {
            return true;
        }
        return false;
    }
};
