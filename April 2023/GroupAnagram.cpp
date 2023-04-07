// Given an array of strings strs, group the anagrams together. You can return the answer in any order.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
#include<vector>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //create a map with the string as one parameter and the vector as another
        //result will be placed into...result  
        map<string,vector<string>>mp;
        vector<vector<string>> result;
        int slength;
        int n = strs.size();
        for(int i=0;i < n ; i++){
            //creates a vector of size 26 and each element is zero
            //in for loop so it gets wiped each time
            vector<int>v(26,0);
            slength = strs[i].length();
            for(int j=0; j < slength; j++){
                //adds up the frequency of in the vector
                v[strs[i][j]-'a']++;
            }
            string s = "";    
            for(int j=0; j < 26; j++){
                //enters all the frequency of each letter to the string
                //#010304...etc

                s.append("#");
                s.append(to_string(v[j]));
            } 
            //at the location of the string #152 etc it will place the original string
            //will create a vector of each identical string this way
            mp[s].push_back(strs[i]);
        }
        for(auto i = mp.begin(); i != mp.end(); i++){
            //will allow it to push all the seconds onto the vector
            result.push_back(i->second);
        }
        return result;
    }
};