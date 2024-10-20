class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        sort(people.begin(), people.end());
        int n = people.size();
        int left = 0, right = n-1;
        int count = 0;

        while(left < right)
        {

            if( people[right] == limit )
            {
                count++;
                right--;
            }

            else if(people[right] < limit)
            {
                if(people[right] + people[left] == limit)
                {
                    count++;
                    right--;
                    left++;
                }
                else if(people[right] + people[left] < limit)
                {
                    left++;
                    right--;
                    count++;
                }
                else
                {
                    right--;
                    count++;
                }
            }

            else    //people[right] > limit
                right--;

        }
        if(people[left] == people[right] && people[left] < limit)
            count++;

        return count;
    }
};