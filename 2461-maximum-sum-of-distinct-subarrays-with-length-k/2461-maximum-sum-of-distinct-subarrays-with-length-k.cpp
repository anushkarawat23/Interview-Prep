class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        long long maxsum = 0;
        set<int> s;
        long long sum  = 0;
        for(int i = 0; i < k ; i++)
        {
            s.insert(nums[i]);
            sum += nums[i];
        }

        if(s.size() == k)
            maxsum = sum;

        for(int i = k ; i < nums.size() ; i++)
        {
            s.insert(nums[i]);
            s.erase(nums[i-k]);
            sum -= nums[i-k];
            sum += nums[i];
            if(s.size() == k)
            {
                maxsum = max(maxsum,sum);
            }

        }

        return maxsum;
        
    }
};