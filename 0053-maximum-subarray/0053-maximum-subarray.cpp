// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) 
//     {
//         // KADANE'S ALGORITHM - ASKED IN GOOGLE
//         int sum = nums[0];
//         int maxi = nums[0];
//         for(int i = 1 ; i < nums.size() ; i++)
//         {
//             if(sum < 0)
//                 sum = 0;
//             sum += nums[i];
//             maxi = max(maxi , sum);
//         }
//         return maxi; 
//     }
// };

//And also print that subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        
        int maxi = nums[0];
        int start = 0, end = 0; // the final start and end position of the maximum sum subarray
        
        int sum = nums[0];
        //int s = 0; // the temporary start position
        
        for(int i = 1;i < n;i++){
            
            if(sum < 0)
            {
                sum = 0;
                start = i+1;
            }  

            sum += nums[i];
      
            if(sum > maxi)
            {
                maxi = sum;
                end = i;
            }
             
        }
        
        cout<<"Maximum Sum Subarray from nums["<<start<<"] = "<<nums[start]<<" till nums["<<end<<"] = "<<nums[end]<<endl;
        
        return maxi; 
    }
};
