class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int cmax = 0;
        if(nums.size() <= 1)
            return nums.size();
        sort(nums.begin(), nums.end());
        int c = 0;

        for(int i = 1 ; i < nums.size() ; i++)
        {
            if(nums[i] - nums[i-1] == 1)
            {
                c++;
            }
            else if(nums[i] - nums[i-1] == 0)
            {
                continue;
            }
            else{
                cmax = max(c, cmax);
                c = 0;
            }
        }
        cmax = max(c,cmax);

        return cmax + 1;
        
    }
};