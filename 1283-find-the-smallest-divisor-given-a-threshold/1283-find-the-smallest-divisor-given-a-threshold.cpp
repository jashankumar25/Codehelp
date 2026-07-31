class Solution {
public:
    int make_Possible(vector<int>& nums, int mid) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum+=nums[i]/mid;

            if(nums[i]%mid!=0)
            sum++;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int i = 1;
        int j = *max_element(begin(nums),end(nums));
        int ans=j;
        while (i <= j) {
            int mid = i + (j - i) / 2;

            if (make_Possible(nums, mid) <= threshold) {
                ans = mid;
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return ans;
    }
};