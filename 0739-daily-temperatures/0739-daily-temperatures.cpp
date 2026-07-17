class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {

        stack<int> st;
        int n = t.size();
        vector<int> res(n, 0);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && t[st.top()] <= t[i]) {
                st.pop();
            }

            if (!st.empty()) {
                res[i] = st.top() - i;//days.
            }

            st.push(i);
        }
        return res;
    }
};
/*vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> res(t.size(), 0);

        stack<int> st;

        for (int i = 0; i < t.size(); i++) {
            int ans = 0;
            for (int j = i + 1; j < t.size(); j++) {
                if (t[i] < t[j]) {
                    ans = (j - i);
                    break;
                }
            }
            res[i] = ans;
        }
        return res;
    }*/