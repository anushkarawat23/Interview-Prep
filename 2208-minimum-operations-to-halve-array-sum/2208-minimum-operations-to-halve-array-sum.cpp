class Solution {
public:
    int halveArray(vector<int>& nums) {

        long double initial_sum = 0;
        priority_queue<float> pq;
        for(int i = 0; i < nums.size() ;i++)
        {
            initial_sum += nums[i];
            pq.push(nums[i]);
        }
        int steps = 0;
        long double half_sum = initial_sum / 2.0;

        while(initial_sum > half_sum)
        {
            steps++;
            float temp = pq.top();
            pq.pop();
            temp = temp / 2.0;
            initial_sum -= temp;
            pq.push(temp);

        }
        return steps;
        
    }
};