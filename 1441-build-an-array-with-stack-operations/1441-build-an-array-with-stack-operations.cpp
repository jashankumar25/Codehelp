class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int stream = 1;
        int i = 0;

        vector<string> res;

        while (i < target.size() && stream <= n) {
            res.push_back("Push");
            if (stream == target[i]) {
                i++;
            } else {
                res.push_back("Pop");
            }
            stream++;
        }
        return res;
    }
};
// Time Complexity
// The stream is processed only once.
// Time = O(n)
// where n is the maximum stream value (or equivalently target.back(), since the loop stops once the target is built).
// Space Complexity
// The answer vector stores the operations.
// Space = O(n)

In the worst case, the output itself contains about 2n operations (Push + Pop), which is still O(n).
