class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        unordered_map<string, int> freqs;

        for(string cur_str : strs){

            string charcount(26, 0);

            for(char character : cur_str){
                charcount[character - 'a']++;
            }
            
            auto it = freqs.find(charcount);

            if(it != freqs.end()){
                int index = it -> second;
                ans[index].push_back(cur_str);
            } else{
                vector<string> elem = {cur_str};
                ans.push_back(elem);
                freqs[charcount] = ans.size()-1;
            }
        }

        return ans;
    }
};

        /*for(int i = 0; i < charcount.size() ; i++){
            cout << "[";
            for(auto it : charcount[i]){
                cout << it.first << ":" << it.second << " | ";
            }
            cout << "]" << endl;
        }*/
