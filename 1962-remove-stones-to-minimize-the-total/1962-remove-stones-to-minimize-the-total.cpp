class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int sum = 0;
        priority_queue<int> pq;
        for(int i = 0; i < piles.size() ; i++)
        {
            pq.push(piles[i]);
        }

        while(k--)
        {
            int temp = pq.top();
            pq.pop();
            temp -= floor(temp/2.0);
            pq.push(temp);
        }

        while(!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }

        return sum;
        
    }
};