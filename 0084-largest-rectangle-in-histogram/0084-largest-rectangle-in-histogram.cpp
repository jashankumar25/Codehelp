class Solution {
public:
    vector<int> getnsr(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        vector<int> nsr(n);

        for (int i = n - 1; i >= 0; i--) {
            if (st.empty()) {
                nsr[i] = n;
            } else {
                while (!st.empty() && heights[st.top()] >= heights[i]) {
                    st.pop();
                }
                if (st.empty()) {
                    nsr[i] = n;
                } else {
                    nsr[i] = st.top();
                }
            }
            st.push(i);
        }
        return nsr;
    }
    vector<int> getnsl(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        vector<int> nsl(n);

        for (int i = 0; i < n; i++) {
            if (st.empty()) {
                nsl[i] = -1;
            } else {
                while (!st.empty() && heights[st.top()] >= heights[i]) {
                    st.pop();
                }
                if (st.empty()) {
                    nsl[i] = -1;
                } else {
                    nsl[i] = st.top();
                }
            }
            st.push(i);
        }
        return nsl;
    }
    int largestRectangleArea(vector<int>& heights) {

        vector<int> nsr = getnsr(heights);
        vector<int> nsl = getnsl(heights);
        int n = heights.size();

        vector<int> width(n);

        for (int i = 0; i < n; i++) {
            width[i] = nsr[i] - nsl[i] - 1;
        }
        int maxarea = 0;
        for (int i = 0; i < n; i++) {
            int area = width[i] * heights[i];

            maxarea = max(area, maxarea);
        }
        return maxarea;
    }
};