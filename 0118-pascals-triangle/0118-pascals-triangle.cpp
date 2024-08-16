class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> result(numRows);

        for(int i = 0 ; i < numRows ; i++)
        {
            result[i] = vector<int>(i+1, 1);

            for(int j = 1 ; j < i ; j++)
            {
                result[i][j] = result[i-1][j] + result[i-1][j-1];
            }
        }

        return result;

        /*
        vector<vector<int>> result;
        if(numRows == 0)
            return result;
        
        result.push_back({1});

        for(int i = 1 ; i < numRows ; i++)
        {
            vector<int> prev_row = result.back();
            vector<int> new_row = {1};

            for( int j = 1 ; j < prev_row.size() ; j++)
            {
                new_row.push_back( prev_row[j] + prev_row[j-1] );
            }

            new_row.push_back(1);
            result.push_back(new_row);
        }

        return result;

        */

        



    }
};