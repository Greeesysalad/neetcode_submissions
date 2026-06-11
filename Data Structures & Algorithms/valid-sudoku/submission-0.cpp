class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<char> row_seen[9];
        unordered_set<char> column_seen[9];
        unordered_set<char> grid_seen[9];

        for(int i = 0; i<board.size(); i++){
            //setup for line so i dont go insane
            const auto line = board[i];

            for(int j=0; j<line.size(); j++){
                //set-up so i dont go insane
                char num = line[j];
                if(num == '.'){continue;}

                //column check
                if(!column_seen[j].insert(num).second){return false;}

                //row check
                if(!row_seen[i].insert(num).second){return false;}

                //grid
                int grid_index = (i / 3) * 3 + (j / 3);
                if(!grid_seen[grid_index].insert(num).second){return false;}
            }
        }

    return true; 
    }
};
