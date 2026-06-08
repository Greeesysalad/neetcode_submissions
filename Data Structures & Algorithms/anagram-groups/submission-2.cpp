class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> freqs;

        for(const auto& cur_str : strs){

            string charcount(26, 0);
            for(char character : cur_str){
                charcount[character - 'a']++;
            }
            freqs[charcount].push_back(cur_str); 

        }
        
        vector<vector<string>> ans;
        for(const auto& dat_pair: freqs){
            ans.push_back(dat_pair.second);
        }

        return ans;
    }
};
