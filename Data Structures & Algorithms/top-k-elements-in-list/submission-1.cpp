class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> freqs;
        for(int num : nums){
            freqs[num]++;
        }
        vector<vector<int>> freq(nums.size() + 1);
        for(const auto& num : freqs){
            freq[num.second].push_back(num.first);
        }

        vector<int> ans;
        for(int i = freq.size()-1; i>0; i--){
            for(int num : freq[i]){
                ans.push_back(num);
                if(ans.size() == k) return ans;
            }
        }
        return ans;
    }
};
