class Solution {
public:
/*
    //BRUTE FORCE  - TLE
    int maxProduct(vector<int>& nums) 
    {
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size() ; i++)
        {
            int product = 1;
            //maxi = max(maxi,product);
            for(int j = i; j < nums.size() ; j++)
            {
                product = product * nums[j];
                maxi = max(maxi,product);
            }
           
        }
        return maxi;
    }
*/
//STRIVER'S VIDEO
    int maxProduct(vector<int>& nums)
    {
        int maxi = INT_MIN;
        int pre = 1, suf = 1;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++)
        {
            if(pre == 0)
                pre = 1;
            if(suf == 0)
                suf = 1;
            pre = pre * nums[i];
            suf = suf * nums[n-i-1];

            maxi = max(maxi, max(pre, suf));
        }

        return maxi;
    }

    
    

        
    
};