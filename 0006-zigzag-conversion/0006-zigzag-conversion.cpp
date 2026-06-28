#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1)
            return s;

        vector<string> rows(numRows);
        int row = 0;
        bool goingDown = true;

        for (char c : s) {
            rows[row] += c;

            if (row == 0)
                goingDown = true;
            else if (row == numRows - 1)
                goingDown = false;

            if (goingDown)
                row++;
            else
                row--;
        }

        string ans = "";
        for (string r : rows)
            ans += r;

        return ans;
    }
};