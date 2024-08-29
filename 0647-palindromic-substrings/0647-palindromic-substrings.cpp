class Solution {
public:
/*    TC = O(N^2)
    int palindrome(string s, int left, int right)
    {
        int ans = 0;
        while(left >= 0 && right < s.size() && s[left] == s[right])
        {
            ans++;
            left--;
            right++;
        }
        return ans;
    }

    int countSubstrings(string s) {

        int ans = 0;
        for(int i = 0; i < s.size() ; i++)
        {
            ans += palindrome(s,i,i); //counting odd palindromes
            ans += palindrome(s,i,i+1);  //counting even palindromes
        }

        return ans; 
    }
    */

    //RECURSION + MEMOIZATION
    int t[1001][1001]; 
    bool checkPalin(string &s, int i, int j)
    {
        if(i > j)
            return true;

        if(t[i][j] != -1)
            return t[i][j];

        if(s[i] == s[j])
            return t[i][j] = checkPalin(s, i+1, j-1);

        return t[i][j] = false;
    }

    int countSubstrings(string s)
    {
        int count = 0;
        int n = s.size();
        memset(t, -1, sizeof(t));
        for(int i = 0; i < n ; i++)
        {
            for(int j = i ; j < n ; j++)
            {
                if(checkPalin(s, i, j))
                    count++;
            }
        }
        return count;
    }

};