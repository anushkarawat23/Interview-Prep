class Solution {
public:
    int singleNumber(vector<int>& nums) {

        //XOR - REFER BIT MANIPULATION
        // a ^ a = 0;
        // a ^ 0 = a;

        int ans = nums[0];
        for(int i = 1; i < nums.size() ; i++)
        {
            ans = ans ^ nums[i];
        }

        return ans;
        
    }
};