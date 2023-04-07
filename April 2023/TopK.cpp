//Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

#include<vector>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;

        for(int i = 0; i < nums.size();++i){
            //this will increase the count of the particular number in the map
            mp[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto it:mp){
            v.push_back({it.second,it.first});
        }
        sort(v.rbegin(),v.rend());
        vector<int>ans;
        
        for(int i=0;i < k;i++){
            //only want the values of that are as frequent or more k
            //pushes back only what is neccesary
            ans.push_back(v[i].second);
        }
    return ans;
    }
};