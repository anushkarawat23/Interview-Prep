class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {

        int maxtime = 0;
        int prevplanted = 0;
        int n = plantTime.size();

        auto comp = [](pair<int, int>& a, pair<int, int>& b)
        {
            return a.first > b.first;
        };

        vector<pair<int,int>> p;    //growtime, planttime
        for(int i = 0; i < n ; i++)
        {
            p.push_back({growTime[i],plantTime[i]});
        }

        sort(p.begin(), p.end(), comp );
        

        for(auto it: p)
        {
            int bloomtime = prevplanted + it.first + it.second;
            maxtime = max(maxtime, bloomtime);
            prevplanted += it.second;
        }

        return maxtime;
        
    }
};