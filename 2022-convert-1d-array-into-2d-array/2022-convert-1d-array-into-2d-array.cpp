class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

       vector<vector<int>> ans(m, vector<int> (n));
       //it is possible to convert 1d to 2d only when
       //original.size() == rows * columns

       if(original.size() != (m * n))
       {
            return {};
       }

       int index = 0;

       for(int i = 0 ; i < m ; i++)
       {
            for(int j = 0 ; j < n ; j++)
            {
                ans[i][j] = original[index];
                index++;
            }
       }

       return ans;     
    
    }
};