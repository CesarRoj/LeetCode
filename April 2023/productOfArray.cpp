#include <vector>
#include <iostream>
#include <map>
#include <utility> 

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         vector<int> result(nums.size());
         if( nums.size() == 0){
            return result;
         }
        

        result.at(0) = 1;
        //iterativly solve for product of values to the left of the location
         for(int i = 1; i < nums.size(); i++){
            result.at(i) = result.at(i-1) * nums.at(i-1);
         }
         //will now solve for everything to the right of the index
         int right = 1; //initiate it to 1 so that it is accurate from the first loop
         for(int j = (nums.size() - 1); j >= 0; j--){
            result.at(j) = result.at(j) * right; //multiply the result by the value to the right
            right = right * nums.at(j); //get the product to the right onto the running value
         }

        return result;

    }
};