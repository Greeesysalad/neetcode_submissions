class Solution {
public:
    bool hasDuplicate(vector<int>& nums){
        unordered_set<int> guy;

        for(int num : nums){
            auto res = guy.insert(num);
            if(res.second == false){
                return true;
            }
        }

        return false;
    }
};