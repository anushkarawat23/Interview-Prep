class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        
        //take diff of two arrays and try to make it 0
        //first do LC 1526
        //https://youtu.be/yX6NHGF_YQ4?si=WuiSdFlm-22BshwK

        int n = nums.size();
        for(int i = 0; i < n ; i++)
        {
            target[i] -= nums[i];
        }

        int prev = 0, curr;
        int ans = 0;
        for(int i = 0 ; i < target.size() ; i++)
        {
            curr = target[i];
            if((curr < 0 && prev > 0) || (curr > 0 && prev < 0))   //sign change
            {
                ans += abs(curr);
            }
            
            else if(abs(curr) > abs(prev))
            {
                ans += abs(curr) - abs(prev);
            }
            prev = curr;
        }
        return ans;
    }
};