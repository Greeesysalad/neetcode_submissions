class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> freqs;
        vector<vector<int>> freq(nums.size() + 1);
        for(int num : nums){
            freqs[num]++;
        }
        for(const auto& num : freqs){
            freq[num.second].push_back(num.first);
        }

        vector<int> ans;
        for(int i = freq.size()-1; i>0 || k == 0; i--){
            for(int num : freq[i]){
                ans.push_back(num);
                k--;
                if(k == 0) return ans;
            }
        }
        return ans;
    }
};
