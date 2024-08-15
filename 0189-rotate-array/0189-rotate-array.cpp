class Solution {

private:
    void reverse(vector<int>& nums, int start, int end)
    {
        while(start < end)
        {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }

public:
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        if(k >= n)
            k = k % n;
        
        reverse(nums, 0, n - 1 - k);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);

        /*
        // TC = O(N * K)   SC = O(1)
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
        */




    }
};