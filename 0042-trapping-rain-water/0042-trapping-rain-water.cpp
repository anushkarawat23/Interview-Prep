class Solution {
public:
    int trap(vector<int>& height) 
    {
        // TC = O(N)   SC = O(N)
        int n = height.size();
        vector<int> leftmax(n), rightmax(n);
        //filling leftmax array
        leftmax[0] = height[0];
        for(int i = 1 ; i < n ; i++)
        {
            if(leftmax[i-1] >= height[i])
            {
                leftmax[i] = leftmax[i-1];
            }
            else
            {
                leftmax[i] = height[i];
            }
        }

        //filling rightmax array
        rightmax[n-1] = height[n-1];
        for(int i = n-2 ; i >= 0 ; i--)
        {
            if(rightmax[i+1] >= height[i])
            {
                rightmax[i] = rightmax[i+1];
            }
            else
            {
                rightmax[i] = height[i];
            }
        }

        int total = 0;
        for(int i = 1 ; i < n-1 ; i++)
        {
            total += min(leftmax[i], rightmax[i]) - height[i];
        }
        return total;
        
    }
};