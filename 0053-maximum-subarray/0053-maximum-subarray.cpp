class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {

            sum = sum + nums[i];
            maxsum = max(sum, maxsum);
            if (sum < 0)
                sum = 0;
        }
        return maxsum;
    }
};
/*-------------------------------
class Solution {
public:
    vector<int> maxSubArray(vector<int>& nums) {

        int sum = 0;
        int maxSum = INT_MIN;

        int start = 0;
        int ansStart = 0;
        int ansEnd = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (sum == 0)
                start = i;

            sum += nums[i];

            if (sum > maxSum) {
                maxSum = sum;
                ansStart = start;
                ansEnd = i;
            }

            if (sum < 0)
                sum = 0;
        }

        vector<int> result;

        for (int i = ansStart; i <= ansEnd; i++)
            result.push_back(nums[i]);

        return result;
    }
};
---------------------------------
       int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {

            sum = sum + nums[i];
            maxsum = max(sum, maxsum);
            if (sum < 0)
                sum = 0;
        }
        return maxsum;
    }
---------------------------------------
int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = INT_MIN;

        for (int i = 0; i < n; i++) {

            for (int j = i; j < n; j++) {
                int sum = 0;

                for (int k = i; k <= j; k++) {
                    sum += nums[k];
                }
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
    }
    --------------------------------------------
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();
        int maxSum = INT_MIN;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
    }
*/
