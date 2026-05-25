class Solution {
public:
    bool hasDuplicate(vector<int>& nums){
        const int size = nums.size();
        bool dupe = false;

        for(int i=0; i<size; i++){
            int current = nums[i];

            for(int next=(i+1); next<size; next++){
                if(current == nums[next]){
                    dupe = true;
                    break;
                }
            }
        }
        return dupe;
    }
};