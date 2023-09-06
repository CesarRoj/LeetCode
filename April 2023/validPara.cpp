class Solution {
public:
    bool isValid(string s) {
        if(s.length() == 1){
            return false;
        }
        stack<char> theStack;
        
        for(int i =0; i < s.length();i++){
            if(s[i] == '(' || s[i] ==  '{' || s[i] == '[' ){
                theStack.push(s[i]);
            }
            else if( (s[i] == ')' && !theStack.empty() && theStack.top() == '(') || (s[i] == '}' &&!theStack.empty() && theStack.top() == '{') || (s[i] == ']' && !theStack.empty() &&theStack.top() == '[')){
                theStack.pop();
            }
            else{
                return false;
            }
        }

        if(theStack.empty()){
            return true;
        }
        return false;

    }
};