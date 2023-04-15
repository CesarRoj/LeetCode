class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        vector<int> ans(arr.size(), 0);
        stack<int> st;
        for(int i = arr.size() - 1; i >= 0; i--) {
            while(!st.empty() && arr[i] >= arr[st.top()])
                st.pop();
            if(!st.empty())
                ans[i] = st.top() - i;
            st.push(i);
        }
        return ans;
    }
};

//this one iterates backwards through the vector
//it will check if the value on the stack is greater than, if it is then it will 
//place the difference into the answer vector then push the new value on
//other wise it will just keep popping off the stack until one is found and place a zero if none found