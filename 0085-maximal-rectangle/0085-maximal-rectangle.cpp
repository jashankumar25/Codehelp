class Solution {
public:
    vector<int> getNSR(vector<int>& height) {
        stack<int> st;
        int n = height.size();

        vector<int> NSR(n);
        for (int i = n - 1; i >= 0; i--) {
            if (st.empty()) {
                NSR[i] = n;
            } else {
                while (!st.empty() && height[st.top()] >= height[i]) {
                    st.pop();
                }
                if (st.empty()) {
                    NSR[i] = n;
                } else {
                    NSR[i] = st.top();
                }
            }
            st.push(i);
        }
        return NSR;
    }
    vector<int> getNSL(vector<int>& height) {
        stack<int> st;
        int n = height.size();

        vector<int> NSL(n);
        for (int i = 0; i < n; i++) {
            if (st.empty()) {
                NSL[i] = -1;
            } else {
                while (!st.empty() && height[st.top()] >= height[i]) {
                    st.pop();
                }
                if (st.empty()) {
                    NSL[i] = -1;
                } else {
                    NSL[i] = st.top();
                }
            }
            st.push(i);
        }
        return NSL;
    }

    int findmaxarea(vector<int>& height) {
        // width=NSR[i]-NSL[i] +1
        vector<int> NSR = getNSR(height);

        vector<int> NSL = getNSL(height);

        int n = height.size();
        vector<int> width(n);
        for (int i = 0; i < n; i++) {
            width[i] = NSR[i] - NSL[i] - 1;
        }
        // height
        int maxarea = 0;

        for (int i = 0; i < n; i++) {
            int a = width[i] * height[i];

            maxarea = max(a, maxarea);
        }
        return maxarea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {

        int m = matrix.size();    // rows
        int n = matrix[0].size(); // columns

        vector<int> height(n);

        // add the first row in the height-1D
        for (int i = 0; i < n; i++) {
            height[i] = (matrix[0][i] == '1') ? 1 : 0;
        }

        int maxarea = findmaxarea(height);

        // further row added
        for (int row = 1; row < m; row++) {
            for (int col = 0; col < n; col++) {
                if (matrix[row][col] == '0') {
                    height[col] = 0;
                } else {
                    height[col] = height[col] + 1;
                }
            }
            maxarea = max(maxarea, findmaxarea(height));
        }
        return maxarea;
    }
};