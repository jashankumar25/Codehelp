class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        bool firstrowimpact = false;
        bool firstcolimpact = false;

        // check first row impact hai ya nhi
        for (int col = 0; col < c; col++) {
            if (matrix[0][col] == 0)
                firstrowimpact = true;
        }
        // check first row impact hai ya nhi
        for (int row = 0; row < r; row++) {
            if (matrix[row][0] == 0)
                firstcolimpact = true;
        }

        for (int i = 1; i < r; i++) {
            for (int j = 1; j < c; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for (int i = 1; i < r; i++) {
            for (int j = 1; j < c; j++) {
                if (matrix[i][0]==0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        if (firstrowimpact) {
            for (int col = 0; col < c; col++) {
                matrix[0][col] = 0;
            }
        }
        if (firstcolimpact) {
            for (int row = 0; row < r; row++) {
                matrix[row][0] = 0;
            }
        }
    }
};
/*----------------------------------------------
 void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        vector<vector<int>> temp = matrix;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == 0) {
                    for (int k = 0; k < c; k++) {
                        temp[i][k] = 0;
                    }
                    for (int k = 0; k < r; k++) {
                        temp[k][j] = 0;
                    }
                }
            }
        }

        matrix=temp;
    }
--------------------------------------------
   void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> row(n, 0);
        vector<int> col(m, 0);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
*/