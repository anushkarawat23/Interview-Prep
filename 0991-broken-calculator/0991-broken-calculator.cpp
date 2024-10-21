class Solution {
public:
    int brokenCalc(int startValue, int target) {
        
        //rather than converting startvalue to target,
        //lets convert target to startvalue
        //if target > startvalue then and even then % else add 1 
        //if target < startvalue then add 1
        
        long long count = 0;

        while(target > startValue)
        {
            if(target % 2 == 0)
            {
                target /= 2;
                count++;
            }
            else
            {
                target++;
                count++;
            }
        }

        if(target < startValue)
        {
            count += startValue - target;

        }
       
        return count;
        
    }
};