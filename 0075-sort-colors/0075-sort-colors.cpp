class Solution {
public:
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
};
/*
---------------------------------------
 void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
--------------------------------------------
*/