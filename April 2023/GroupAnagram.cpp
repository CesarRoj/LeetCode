// Given an array of strings strs, group the anagrams together. You can return the answer in any order.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

#include <iostream>


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair <string,int> >dupArray;
        
        //create a duplicate array that will hold pairs
        //it will be the string and t he corresponding index
        for (int i = 0; i < strs.size(); i++) {
            dupArray.push_back(make_pair(strs.at(i), i));
            // pair.first contains the input words and
            // pair.second contains its index
        }

        //sort each individual string by its letters
        for (int j = 0; j < size; ++j) {
            sort(dupArray[j].first.begin(),dupArray[j].first.end());
        }
        //now that each string is sorted the whole vector must be sorted
        //this will put strings that are the same right next to each other
        sort(dupArray.begin(), dupArray.end());

        vector<vector<string>> returnVector;
        vector<string> smallerVectors;
        smallerVectors.push_back(strs.at(dupArray.at(0).second));
        returnVector.push_back(smallerVectors);
        for (int k = 1; k < strs.size(); ++k){
            if(strcmp(dupArray.at(k).first,duArray.at(k-1).first)){
                returnVector.push_back()
                //lost on the final portion of how to solve the addition of all the vectors back on
            }
        }
    }
};