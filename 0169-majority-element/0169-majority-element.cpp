class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j])
                    count++;
            }

            if (count > n / 2) {
                return nums[i];
            }
        }
        return -1;
    }
};
/* int majorityElement(vector<int>& nums) {

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
    }*/