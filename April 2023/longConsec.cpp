class Solution {
public:
    int longestConsecutive(vector<int>& nums) {



        //essentially created a loop that kept track of the times it was in order and skipped cases as neccesary
        if(nums.size() == 0){
            return 0;
        }
        vector<int> numCopy = nums;
        vector<int> results;
        sort(numCopy.begin(),numCopy.end());
        int order = 1;
        for(int i = 0; i < numCopy.size() -1; ++i){
            if((numCopy[i]+1) == (numCopy[i+1])){
                ++order;
            }
            else if((numCopy[i]) == (numCopy[i+1])){
                //do nothing
            }
            else{
                results.push_back(order);
                order = 1;
            }
        }
        results.push_back(order);
        sort(results.begin(),results.end());

        return results.back();

    }
};