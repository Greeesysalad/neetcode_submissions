class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;

        for(string elem : tokens){

            if(elem.size() > 1 || isdigit(elem[0])){
                stk.push(stoi(elem));
                continue;
            }
                
            int right = stk.top();
            stk.pop();
            int left = stk.top();
            stk.pop();
            switch(elem[0]){
                case '+': stk.push(left + right); break;
                case '-': stk.push(left - right); break;
                case '*': stk.push(left * right); break;
                case '/': stk.push(left / right); break;
            }
        }
        return stk.top();
    }
};
