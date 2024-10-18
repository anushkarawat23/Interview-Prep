class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int maxIndex = 0;  //the max index that can be reached

        for(int i = 0; i < nums.size() ; i++)
        {
            if(i > maxIndex)    //cant reach i if it is > maxindex 
                return false;    //as maxIndex means tha max index which 
                                 //can be reached from any point

            maxIndex = max(maxIndex, i + nums[i]); //updating maxIndex at each pt
        }

        return true;
        
    }
};