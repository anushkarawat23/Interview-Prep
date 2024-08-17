class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        int toSwap = -1;
    //first find the index to be swapped
        for(int i = n-1; i > 0 ; i--)
        {
            if(nums[i-1] < nums[i])
            {
                toSwap = i-1;
                break;
            }
        }
    //now find the index to swap it with (first larger than it)
        if(toSwap != -1)
        {
            int withSwap = toSwap;

            for(int i = n-1 ; i > toSwap ; i--)
            {
                if(nums[i] > nums[toSwap])
                {
                    withSwap = i;
                    break;
                }
            }

            swap(nums[toSwap], nums[withSwap]);
        }

        reverse(nums.begin() + toSwap + 1, nums.end());
    }
};