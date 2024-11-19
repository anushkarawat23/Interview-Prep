class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        //create a min heap of size k
        priority_queue<int, vector<int>, greater<int>> pq;

        //insert first k elements of the arr
        int i = 0;
        for(i = 0; i < k ; i++)
        {
            pq.push(nums[i]);
        }

        for(i = k ; i < nums.size(); i++)
        {
            //solve by dry running and visualizing
            if(nums[i] > pq.top())
            {
                pq.pop();
                pq.push(nums[i]);
            }
        }

        return pq.top();

    }
};