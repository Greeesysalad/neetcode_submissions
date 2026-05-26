#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int count = nums.size();
        auto ans = make_pair(0,0);

        for(int i = 0; i < count; i++){
            int num1 = nums[i];
            int candidate = target - num1;
            
            auto it = find(nums.begin(), nums.end(), candidate);

            if(it != nums.end()){
                int index2 = distance(nums.begin(), it);

                if(index2 != i && index2 > i){
                    vector<int> ans = {i,index2};
                    return ans;
                }
                else if(index2 != i && index2 < i){
                    vector<int> ans = {index2, i};
                    return ans;
                }
            }
        }
    }
};
