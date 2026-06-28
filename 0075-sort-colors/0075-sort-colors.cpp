class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Approach 3: Dutch National Flag Algorithm (Optimal)
        int i = 0;
        int j = 0;
        int k = nums.size() - 1;

        while (j <= k) {
            if (nums[j] == 1) {
                j++;
            } else if (nums[j] == 2) {
                swap(nums[j], nums[k]);
                k--;
            } else {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }
    }
};

/*
---------------------------------------
 void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
--------------------------------------------
void sortColors(vector<int>& nums) {
        int one = 0, zero = 0, two = 0;
        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 0) {
                zero++;
            } else if (nums[i] == 1) {
                one++;
            } else {
                two++;
            }
        }

        int i = 0;

        while (zero >0) {
            nums[i++] = 0;
            zero--;
        }
        while (one > 0) {
            nums[i++] = 1;
            one--;
        }
        while (two> 0) {
            nums[i++] = 2;
            two--;
        }
    }
*/