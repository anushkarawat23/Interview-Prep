class Solution {
public:
    string makeFancyString(string s) {

        int n = s.size();
        if(n <= 2)
            return s;
        
        int prev = 0;
        int curr = 1;
        int next = 2;

        while(next <= n-1)
        {
            if(s[prev] == s[curr] && s[curr] == s[next])
            {
                s[prev] = '$';
            }
            prev = curr;
            curr = next;
            next++;
        }

        string ans = "";

        for(int i = 0; i < n ; i++)
        {
            if(s[i] != '$')
                ans += s[i];
        }

        return ans;
        
    }
};