class Solution {
public:
    int secondHighest(string s) {

        vector<int> arr;
        for(int i = 0; i < s.size() ; i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                int temp = s[i] - '0';
                arr.push_back(temp);
            }
        }

        int first = INT_MIN, second = INT_MIN;

        for(int i = 0; i < arr.size() ; i++)
        {
            if(arr[i] > second && arr[i] != first)
            {
                if(arr[i] > first)
                {
                    second = first;
                    first = arr[i];
                }
                else
                {
                    second = arr[i];
                }
            }
        }

        if(second == INT_MIN)
            return -1;
        else
            return second;
        
    }
};