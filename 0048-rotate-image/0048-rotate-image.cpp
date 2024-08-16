class Solution {
public:
    
    /*
    void reverse(vector<int>& arr)
    {
        int n = arr.size();
        int left = 0, right = n-1;
        while(left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    */

    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        //transpose -> rows ko column, column ko rows kardo
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i ; j < n ; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i = 0 ; i < n ; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }

    }
};