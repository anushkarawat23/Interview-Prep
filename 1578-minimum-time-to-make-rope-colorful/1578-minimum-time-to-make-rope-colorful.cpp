class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {

        int prev = 0, curr = 1;
        int ans = 0;
        int n = colors.size();
        if(n == 0 || n == 1)
            return 0;
        while(curr <= n-1)
        {
            if(colors[prev] == colors[curr])
            {
                if(neededTime[prev] <= neededTime[curr])
                {
                    ans += neededTime[prev];
                }
                else
                {
                    ans += neededTime[curr];
                }
            }
            prev = curr;
            curr++;
        }

        return ans;
        
    }
};