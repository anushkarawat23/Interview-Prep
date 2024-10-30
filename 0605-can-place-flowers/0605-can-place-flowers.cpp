class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int curr = 0;
        if(n == 0)
            return true;
        if(flowerbed.size() == 0)
            return false;
        if(flowerbed.size() == 1)
        {
            if(flowerbed[0] == 0 && (n == 1 || n == 0))
                return true;
            else
                return false;              
        }

        //can place in the starting
        if(flowerbed[curr] == 0 && flowerbed[curr+1] == 0)
        {
            flowerbed[curr] = 1;
            n--;
        }
        
        for(int curr = 1; curr < flowerbed.size()-1 ; curr++)
        {
            if(flowerbed[curr] == 0)
            {
                if(flowerbed[curr-1] == 0 && flowerbed[curr+1] == 0)
                {
                    flowerbed[curr] = 1;
                    n--;
                }
            }
        }

        //can place in the last
        curr = flowerbed.size() - 1;
        if(flowerbed[curr] == 0 && flowerbed[curr-1] == 0)
        {
            flowerbed[curr] = 1;
            n--;
        }

        if(n <= 0)
            return true;
        else
            return false;
        
    }
};