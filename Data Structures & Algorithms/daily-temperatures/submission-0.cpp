class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        if(temperatures.size() == 0){return ans;}

        stack<int> indices;
        indices.push(0);

        for(int i = 1; i< temperatures.size(); i++){
            
            while(temperatures[i] > temperatures[indices.top()]){
                cout << "comparing: " << temperatures[i] << endl;
                cout << temperatures[i] << " bigger than " << temperatures[indices.top()] << endl;
                ans[indices.top()] = i - indices.top();
                indices.pop();

                if(indices.empty()){
                    cout << "empty!" << endl;
                    break;
                }
            }
            indices.push(i);
        }

        return ans;
    }
};
