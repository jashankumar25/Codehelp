class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();

        int read = 0;
        int write = 0;

        while (read < n) {

            char curr = chars[read];
            int count = 0;

            while (read < n && chars[read] == curr) {
                count++;
                read++;
            }
            chars[write] = curr;
            write++;

            if (count > 1) {
                string cnt = to_string(count);

                for (auto d : cnt) {
                    chars[write] = d;
                    write++;
                }
            }
        }
        return write;
    }
};