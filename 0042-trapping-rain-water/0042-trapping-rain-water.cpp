class Solution {
public:
    int trap(vector<int>& height) 
    {/*
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
        */

        // TC = O(N)   SC = O(1)

        int n = height.size();
        int leftmax = 0, rightmax = 0;
        int left = 0, right = n - 1;
        int total = 0;
        while(left < right)
        {
            if(height[left] <= height[right])
            {
                if(leftmax > height[left]) // If water can be stored
                    total += leftmax - height[left];
                else
                    leftmax = height[left];
                left++;
            }
            else
            {
                if(rightmax > height[right]) // If water can be stored
                    total += rightmax - height[right];
                else
                    rightmax = height[right];
                right--;
            }
        }
        return total;
    }
};