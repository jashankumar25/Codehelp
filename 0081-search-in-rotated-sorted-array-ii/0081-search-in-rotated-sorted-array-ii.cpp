class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target)
                return true;

            if (nums[s] == nums[mid] && nums[e] == nums[mid]) {
                s++;
                e--;
                continue;
            }

            if (nums[s] <= nums[mid]) {
                if (nums[s] <= target && target < nums[mid])
                    e = mid - 1;
                else
                    s = mid + 1;
            } else {
                if (nums[mid] < target && target <= nums[e])
                    s = mid + 1;
                else
                    e = mid - 1;
            }
        }
        return false;
    }
};
/* 
----------------------------------
class Solution {
public:
    int pivot_index(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        while (s < e && nums[s] == nums[s + 1])
            s++;

        while (s < e && nums[e] == nums[e - 1])
            e--;
        while (s < e) {

            int mid = s + (e - s) / 2;

            if (nums[mid] > nums[e]) {
                s = mid + 1;
            } else if (nums[mid] < nums[e]) {
                e = mid;
            } else {
                e--;
            }
        }
        return s;
    }
    bool binary_search(int s, int e, vector<int>& nums, int target) {
        int ans = false;
        while (s <= e) {

            int mid = s + (e - s) / 2;
            if (nums[mid] == target)
                ans = true;
            if (nums[mid] > target) {
                e = mid - 1;
            } else
                s = mid + 1;
        }
        return ans;
    }
    bool search(vector<int>& nums, int target) {

        int pivot = pivot_index(nums, target);

        if (binary_search(0, pivot - 1, nums, target))
            return true;
        return binary_search(pivot, nums.size() - 1, nums, target);
    }
};
--------------------------------------------
bool search(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return true;
            }
        }
        return false;
    }
*/