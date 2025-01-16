class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //Rule #1
        for (int row = 0; row < 9; row++) {
            unordered_set<char> chars;
            for (int i = 0; i < 9; i++) {
                if (chars.count(board[row][i])){
                    return false;
                } 
                if (board[row][i] == '.'){
                    continue;
                } 
                chars.insert(board[row][i]);
            }
        }
        //Rule #2
        for (int col = 0; col < 9; col++) {
            unordered_set<char> chars;
            for (int i = 0; i < 9; i++) {
                if (chars.count(board[i][col])){
                    return false;
                } 
                if (board[i][col] == '.'){ 
                    continue;
                }
                chars.insert(board[i][col]);
            }
        }
        //Rule #3
        for (int square = 0; square < 9; square++) {
            unordered_set<char> chars;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {

                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if (chars.count(board[row][col])){
                        return false;
                    }
                    if (board[row][col] == '.'){
                        continue;
                    } 
                    chars.insert(board[row][col]);
                }
            }
        }
        return true;
    }
};
