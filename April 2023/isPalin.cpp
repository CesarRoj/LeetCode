/// NEED TO STUDY THIS ONE MORE, WORKS BUT STRUGGLE TO EFFECTIVELY EXPLAIN
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0; 
        int right = s.length()-1;
        while(left<right)
        {
            if(!isalnum(s[left])) left++;
            else if(!isalnum(s[right])) right--;
            else if(tolower(s[left])!=tolower(s[right])) return false;
            else {left++; right--;}
        }
        return true;

    }
};