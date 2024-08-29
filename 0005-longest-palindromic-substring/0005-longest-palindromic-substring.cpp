class Solution {
public:
    //RECURSION + MEMOIZATION
    /*
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
        */

  
    // Expanding from mid to find palindromes
    string checkPalin(string &s, int left, int right) 
    {
        string maxlen = "";
        while (left >= 0 && right < s.size() && s[left] == s[right]) 
        {
            // Expand outwards
            left--;
            right++;
        }
        // After the loop, left and right will be one step beyond the actual palindrome
        return s.substr(left + 1, right - left - 1);
    }
    
    string longestPalindrome(string s) 
    {
        int n = s.size();
        string maxlen = "";

        for (int i = 0; i < n; i++) 
        {
            // Check for odd length palindromes (single character center)
            string ans1 = checkPalin(s, i, i);
            if (ans1.size() > maxlen.size()) 
            {
                maxlen = ans1;
            }

            // Check for even length palindromes (two character center)
            string ans2 = checkPalin(s, i, i + 1);
            if (ans2.size() > maxlen.size()) 
            {
                maxlen = ans2;
            }
        }

        return maxlen;
    }
};

   