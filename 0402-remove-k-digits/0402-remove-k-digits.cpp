class Solution {
public:
    string removeKdigits(string num, int k) {
        string result = "";//act like a stack
        int n = num.length();
        for (int i = 0; i < n; i++) {
            while (k > 0 && result.length() > 0 && result.back() > num[i]) {
                result.pop_back();
                k--;
            }
            if (result.length() > 0 || num[i] != '0') {
                result.push_back(num[i]);// to avoid preceding zeroes
            }
        }
        while (k > 0 && result.length() > 0) {
            result.pop_back();
            k--;
        }

        if (result == "")
            return "0";

        return result;
    }
};