class Solution {
public:
    bool hasDuplicate(vector<int>& nums){
        int size = nums.size();
        int search = 0;

        for(int i=0; i<size; i++){
            search = nums[i];
            for(int j= i+1 ; j<size; j++){
                if(nums[j] == search){return true;}
            }
        }

        return false;
    }
};