class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        int max = 0;
        int ans = 0;
        for (auto it : mp) {

            if (it.second > max)
            {
                max = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};