class Solution {
public:
    bool checkIfExist(vector<int>& arr) {

         for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size(); j++) {
                // Step 2: Check the conditions
                if (i != j && arr[i] == 2 * arr[j]) {
                    return true;
                }
            }
        }
        // No valid pair found
        return false;
        
    }
};