class Solution {
public:
    bool isToeplitzMatrix(const vector<vector<int>>& matrix) {
        const int m = matrix.size();
        const int n = matrix[0].size();

        //diagonals starting from the first column
        for (int r = 0; r < m; ++r) {
            if (!isValidDiagonal(matrix, r, 0, m, n)) {
                return false;
            }
        }

        //diagonals starting from the first row 
        for (int c = 1; c < n; ++c) {
            if (!isValidDiagonal(matrix, 0, c, m, n)) {
                return false;
            }
        }

        return true;
    }

private:
    bool isValidDiagonal(const vector<vector<int>>& matrix, int r, int c, int m, int n) {
        const int val = matrix[r][c];
        while (r < m && c < n) {
            if (matrix[r][c] != val) {//00 11 22 etc //01 12 aise diagonal move karenge
                return false;
            }
            ++r;
            ++c;
        }
        return true;
    }
};