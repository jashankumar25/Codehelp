class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        for (int layer = 0; layer < n / 2; layer++) {

            int first = layer;
            int last = n - layer - 1;

            for (int i = first; i < last; i++) {

                int offset = i - first;

                int top = matrix[first][i];

                // Left → Top
                matrix[first][i] = matrix[last - offset][first];

                // Bottom → Left
                matrix[last - offset][first] = matrix[last][last - offset];

                // Right → Bottom
                matrix[last][last - offset] = matrix[i][last];

                // Top → Right
                matrix[i][last] = top;
            }
        }
    }
};

/*---------------------------------------
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        // Reverse rows
        reverse(matrix.begin(), matrix.end());

        // Transpose
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};

(   same AS   Transpose   ↓    Reverse Columns)

instead of creating another matrix, we perform two operations:

Step 1: Reverse the rows (Top ↔ Bottom)
1 2 3          7 8 9
4 5 6   --->   4 5 6
7 8 9          1 2 3

Step 2: Transpose the matrix

Transpose means

Swap matrix[i][j] with matrix[j][i]

Only swap the elements above the diagonal, otherwise every pair will be swapped twice.

After transpose:

7 8 9          7 4 1
4 5 6   --->   8 5 2
1 2 3          9 6 3

This is exactly 90° clockwise rotation.
--------------------------------------------
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