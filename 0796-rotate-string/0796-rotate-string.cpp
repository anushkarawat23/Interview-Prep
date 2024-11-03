class Solution {
public:
    bool rotateString(string s, string goal) {

        int n = s.size();
        if(n != goal.size())
            return false;

        int i = 0;
        while( i < n )
        {
            if(s == goal)
                return true;
            else
            {
                char c = s[0];
                for(int j = 0; j < n-1 ; j++)
                {
                    s[j] = s[j+1];
                }
                s[n-1] = c;
            }
            i++;
        }

        return false;
        
    }
};