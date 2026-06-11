class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> seq(nums.begin(), nums.end());
        int seq_cnt = 0;

        for(int num : seq){
            if(seq.count(num - 1)) { continue; }
            
            int size = 0;
            while(seq.count(num)){
                size++;
                num++;
            }
            if(size > seq_cnt){ seq_cnt = size; }
        }
        return seq_cnt;
    }
};