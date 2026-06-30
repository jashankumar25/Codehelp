class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

/*
--------------------------------------
void rotate(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();

        vector<vector<int>> temp(r, vector<int>(c));

        for (int row = 0; row < r; row++) {
            for (int col = 0; col <c; col--) {
                temp[col][r - 1 - row] = mat[row][col];
            }
        }
        mat = temp;
    }
*/