class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        unordered_map<char, char> brackets;
        brackets[']'] = '[';
        brackets['}'] = '{';
        brackets[')'] = '(';

        for(char ele: s){
            if(brackets.find(ele) == brackets.end()){
                stk.push(ele);
                continue;
            }

            if(stk.empty() == true){return false;}
            if(brackets[ele] == stk.top()){
                stk.pop();
                continue;
            };

            return false;      
        };  

        if(stk.empty() == true){return true;}
        return false;
    }
};
