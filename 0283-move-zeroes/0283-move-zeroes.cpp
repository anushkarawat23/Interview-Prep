class Solution {
public:

   // tc = o(n)   sc = o(1)
   
    void moveZeroes(vector<int>& nums) 
    {
        int left=0,right=0;
        int n=nums.size();
        if(n==0 || n==1)    //only 1 element array
            return;

        while(right<n)
        {
            if(nums[right]==0)
                right++;
            else
            {
                swap(nums[left],nums[right]);
                left++;
                right++;
            }
        }
    }
    

};