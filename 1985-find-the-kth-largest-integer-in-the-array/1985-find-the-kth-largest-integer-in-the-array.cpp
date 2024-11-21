class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {

        
        auto cmp = [](const string& a, const string& b) 
        {
            if (a.length() == b.length())
                return a > b; // Lexicographical comparison for equal lengths
            return a.length() > b.length(); // Compare lengths
        };

        priority_queue<string, vector<string>, decltype(cmp)> minheap(cmp);


        for(int i = 0; i < k; i++)
        {
            minheap.push(nums[i]);
        }     

        if(k == nums.size())
            return minheap.top();   

        for(int i = k; i < nums.size() ; i++)
        {
            if(nums[i] > minheap.top())
            {
                minheap.pop();
                minheap.push(nums[i]);
            }
        }

        return minheap.top();
    }
};