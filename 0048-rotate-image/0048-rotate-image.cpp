class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();

        vector<vector<int>> temp(r, vector<int>(c));

        for (int row = 0; row < r; row++) {
            for (int col = c - 1; col >= 0; col--) {
                temp[col][r - 1 - row] = mat[row][col];
            }
        }
        mat = temp;
    }
};