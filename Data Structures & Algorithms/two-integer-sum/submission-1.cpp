#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> hash;
        int size = nums.size();

        for(int i=0; i<size; i++){
            int complement = target - nums[i];
            auto it = hash.find(complement);

            if(it != hash.end()){
                ans.push_back(it -> second);
                ans.push_back(i);
                return ans;
            }
            
            hash.insert({nums[i], i});
        }
    }
};
