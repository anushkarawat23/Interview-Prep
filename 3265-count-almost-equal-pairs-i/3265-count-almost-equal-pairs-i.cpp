class Solution {
public:

    bool almostEqual(int a, int b)
    {
        vector<pair<int,int>> p;
        while(a > 0 || b > 0)
        {
            int ra = a % 10;
            int rb = b % 10;
            a = a / 10;
            b = b / 10;
            if(ra != rb)
            {
                if(p.size() > 2)
                    return false;
                p.push_back({ra,rb});
            }
        }
        if( p.size() == 2)
        {
            if(p[0].first == p[1].second && p[0].second == p[1].first)
                return true;
        }
        if(p.size() == 0)
            return true;
        
        return false;   
    }

    int countPairs(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                if(almostEqual(nums[i], nums[j]))
                    ans++;
            }
        }
        return ans;
    }
};