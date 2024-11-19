class Solution {
public:

    static bool comp(int &a, int &b)
    {
        return a > b;
    }

    int thirdMax(vector<int>& nums) {

        unordered_set<int> s;
        for(int i : nums)
        {
            s.insert(i);
        }

        vector<int> ans;

        for(auto it: s)
        {
            ans.push_back(it);
        }
        
        sort(ans.begin(), ans.end(), comp);
        if(ans.size() < 3)
            return ans[0];
        
        return ans[2];


    
    }
};