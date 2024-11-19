class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        vector<vector<int>> ans;
        priority_queue<pair<double,int>> pq;   //maxheap
        vector<double> dist;

        for (int i = 0; i < points.size(); i++) 
        {
            int x = points[i][0];
            int y = points[i][1];

            double distance = sqrt(x * x + y * y);
            dist.push_back(distance);
        }

        for(int i = 0; i < k ; i ++)
        {
            pq.push({dist[i], i});
        }

        for(int i = k; i < dist.size() ; i++)
        {
            if(dist[i] < pq.top().first)
            {
                pq.pop();
                pq.push({dist[i], i});
            }
        }

        while( !pq.empty() )
        {
            int ind = pq.top().second;
            ans.push_back(points[ind]);
            pq.pop();
        }

        return ans;
        
    }
};