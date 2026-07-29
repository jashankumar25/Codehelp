class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;

        while (i < j) {
            int mid = i + (j - i) / 2;
            
            if (nums[mid] > nums[j])
                i = mid + 1;
            else if (nums[mid] < nums[j])
                j = mid;
            else
                j--;
        }
        return nums[i]; // nums[i] //nums[j]
    }
};
/* int findMin(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;

        while (i < j) {
            int mid = i + (j - i) / 2;

            if (nums[i] == nums[mid] && nums[j] == nums[mid]) {
                i++;
                j--;
                continue;
            }

            if (nums[mid] > nums[j]) {
                i = mid + 1;
            } else {
                j = mid;
            }
        }
        return nums[i]; // nums[i] //nums[j]
    }
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0];
    }*/