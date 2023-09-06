class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(),nums.end());

        vector<vector<int>> answers;

        int low = 0, high = 0;

        for(int i = 0; i < n-1; ++i){
            low = i+1, high = n-1;

            while(low < high){
                
                if(nums[i] + nums[low] + nums[high] < 0){
                    low++; //make small number bigger since result not enough
                }
                else if(nums[i] + nums[low] + nums[high] > 0){
                    high--;//make big number smaller since too big
                }
                else{
                    output.push_back({nums[i], nums[low], nums[high]});
                    int tempIndex1 = low, tempIndex2 = high;
                    while(low < high && nums[low] == nums[tempIndex1]) low++;
                    while(low < high && nums[high] == nums[tempIndex2]) high--;
                    //move the index past what we have already searched
                }
            }
            while(i+1 < n && nums[i] == nums[i+1]) i++;
            //similar move the indices past what we are the same number
        }
        return output;
    }
};