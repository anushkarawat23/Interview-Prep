class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {

        long long score = 0;
        priority_queue<int> pq;

        for(int i = 0; i < nums.size() ; i++)
        {
            pq.push(nums[i]);
        }

        while(k--)
        {
            score += pq.top();
            int temp = pq.top();
            //cout << temp << endl;
            pq.pop();
            temp = ceil(temp/3.0);
            //cout << temp<<endl;;
            pq.push(temp);
        }

        return score;

        
    }
};