class Solution {
public:
    int minNumberOperations(vector<int>& target) {

        //https://youtu.be/yX6NHGF_YQ4?si=WuiSdFlm-22BshwK
        
        int prev = 0, curr;

        int ans = 0;
        for(int i = 0 ; i < target.size() ; i++)
        {
            curr = target[i];
            if(curr > prev)
            {
                ans += curr - prev;
            }
            prev = curr;
        }
        return ans;
    }
};