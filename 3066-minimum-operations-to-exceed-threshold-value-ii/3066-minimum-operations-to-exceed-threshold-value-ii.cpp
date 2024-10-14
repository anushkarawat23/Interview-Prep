class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            pq.push(nums[i]);
        }
       
        long long steps = 0;

        while(pq.size() >= 2 && pq.top() < k)
        {
            steps++;
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            long long temp = first*2 + second;
            pq.push(temp);
        }

        return steps;
        
    }
};