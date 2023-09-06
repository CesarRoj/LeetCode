class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> myStack;
        int leftString;
        int rightString;
        for(int i = 0; i < tokens.size(); ++i){
            if((tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/" ) && !myStack.empty()){
                rightString = myStack.top();
                myStack.pop();
                leftString = myStack.top();
                myStack.pop();
                if(tokens[i] == "+"){
                     myStack.push(leftString + rightString);
                }
                if(tokens[i] == "-"){
                    myStack.push(leftString - rightString);
                }
                if(tokens[i] == "*"){
                    myStack.push(leftString * rightString);
                }
                if(tokens[i] == "/"){
                    myStack.push(leftString / rightString);
                }
            }
            else{
                myStack.push(stoi(tokens[i]));
            }
        }
        return myStack.top();
    }
};