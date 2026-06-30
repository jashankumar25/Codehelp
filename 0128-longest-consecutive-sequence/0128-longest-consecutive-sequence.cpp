class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;

        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;

        for (auto it : st) {

            if (st.find(it - 1) == st.end()) {
                int cnt = 1;
                int x = it;

                while (st.find(x + 1) != st.end()) {
                    x = x + 1;
                    cnt++;
                }
                ans = max(ans, cnt);
            }
        }

        return ans;
    }
};
/*--------------------------------------------------
int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;

        sort(nums.begin(), nums.end());

        int ans = 1, cnt = 1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1])
                continue;
            if (nums[i] + 1 == nums[i + 1])
                cnt++;
            else
                cnt = 1;

            ans = max(ans, cnt);
        }
        return ans;
    }
---------------------------------------------------
int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int ans = 1;
        int cnt = 1;
        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i - 1])
                continue;

            if (nums[i] == nums[i - 1] + 1)
                cnt++;
            else
                cnt = 1;

            ans = max(ans, cnt);
        }
        return ans;
    }
----------------------------------------------------
bool ls(vector<int>& nums, int x) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x)
                return true;
        }
        return false;
    }
    int longestConsecutive(vector<int>& nums) {
        int count = 0;
        int ans=0;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            count = 1;

            while (ls(nums, x + 1)) {
                x = x + 1;
                count++;
            }
           ans=max(ans,count);
        }
        return ans;
    }
*/