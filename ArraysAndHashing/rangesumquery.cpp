class NumMatrix {
private:
    vector<vector<int>> matrix;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        this -> matrix = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int res = 0;
        for(int i = row1; i <= row2; i++){
            for(int j = col1; j <= col2; j++){
                res += matrix[i][j];
            }
        }
        return res;
    }
};
