class Solution {
public:
    int make_possible(vector<int>& nums, int mid, int k) {
        int sum = 0;
        int subarray = 1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (sum > mid) {
                subarray++;
                sum = nums[i];

                if (subarray > k)
                    return false;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int i = *max_element(nums.begin(), nums.end());
        int j = accumulate(nums.begin(), nums.end(),0);
        int ans=j;
        while (i <= j) {
            int mid = i + (j - i) / 2;

            if (make_possible(nums, mid, k)) {
                ans = mid;
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return ans;
    }
};