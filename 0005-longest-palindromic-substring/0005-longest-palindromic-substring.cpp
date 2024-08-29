class Solution {
public:
    //RECURSION + MEMOIZATION
    
    int t[1001][1001];

    bool checkPalin(string &s, int i, int j)
    {
        if(i >= j)
            return true;
        
        if(t[i][j] != -1)
            return t[i][j];    //0 false, 1 true
        
        if(s[i] == s[j])
            return t[i][j] = checkPalin(s, i+1, j-1);
        
        return t[i][j] = false;
    }

    string longestPalindrome(string s) 
    {
        int n = s.size();
        memset(t, -1, sizeof(t));

        string maxlen = "";

        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i ; j < n ; j++)
            {
                if(checkPalin(s, i, j))
                {
                    string sub = s.substr(i, j - i + 1);
                    if(sub.size() > maxlen.size())
                        maxlen = sub;
                }
            }
        }
        return maxlen;
        
    }
};