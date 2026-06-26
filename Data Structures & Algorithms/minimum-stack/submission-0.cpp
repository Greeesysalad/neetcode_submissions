class MinStack {
    private:
        stack<pair<int, int>> stk;
        //pair = <stk value, stk minimum>

    public:
        MinStack() {
            
        }
        
        void push(int val) {
            if(stk.empty()){
                stk.push({val,val});
            }else{
                int small = min(val, stk.top().second);
                stk.push({val, small});
            }
        }
        
        void pop() {
            stk.pop();
        }
        
        int top() {
            return stk.top().first;
        }
        
        int getMin() {
            return stk.top().second;
        }
    };
