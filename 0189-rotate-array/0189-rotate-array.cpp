class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        if(k >= n)
            k = k % n;

        while(k--)
        {
            int last = nums[n-1];
            int n = nums.size();

            for(int i = n-1 ; i > 0 ; i--)
            {
                nums[i] = nums[i-1];
            }
            nums[0] = last;
        }
    }
};