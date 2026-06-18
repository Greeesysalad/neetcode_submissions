class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        if(temperatures.size() == 0){return ans;}

        stack<int> indices;
        indices.push(0);

        for(int i = 1; i< temperatures.size(); i++){
            
            while(temperatures[i] > temperatures[indices.top()]){
                ans[indices.top()] = i - indices.top();
                indices.pop();

                if(indices.empty()){break;}
            }
            indices.push(i);
        }

        return ans;
    }
};
