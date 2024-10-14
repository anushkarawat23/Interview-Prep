class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {

        priority_queue<int> pq;
        long long ans = 0;
        for(int i = 0 ; i < gifts.size() ; i++)
        {
            pq.push(gifts[i]);
        }

        while(k--)
        {
            int temp = pq.top();
            pq.pop();
            temp = floor(pow(temp,0.5));
            pq.push(temp);
        }
        while(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }

        return ans;
        
    }
};