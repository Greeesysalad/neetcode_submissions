class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(const string& s : strs){
            encoded += std::to_string(s.length()) + "#" + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        
        while (i < (int)s.size()) {
            // Find the delimiter
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            
            int length = stoi(s.substr(i, j - i));
            
            // Extract the string based on length
            // The string starts after the '#' at index j+1
            result.push_back(s.substr(j + 1, length));
            
            i = j + 1 + length;
        }
        return result;
    }
};
