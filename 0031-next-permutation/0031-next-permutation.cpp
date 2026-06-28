class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        next_permutation(nums.begin(), nums.end());
    }
}; /*
 ----------------------------------------
 void nextPermutation(vector<int>& nums) {
         //---Concept
         int n = nums.size();
         // first find the blue gola
         int gola_index = -1;
         for (int i = n - 1; i > 0; i--) {
             if (nums[i - 1] < nums[i]) {
                 gola_index = i - 1;
                 break;
             }
         }
         if (gola_index != -1) {
             int swap_index = -1;
             for (int j = n - 1; j >= gola_index; j--) {
                 if (nums[j] > nums[gola_index]) {
                     swap_index = j;
                     break;
                 }
             }
             swap(nums[gola_index], nums[swap_index]);
         }
         reverse(nums.begin() + gola_index + 1, nums.end());
     }
 -------------------------------------------------------------------
 void nextPermutation(vector<int>& nums) {

         vector<vector<int>> perms;
         vector<int> temp = nums;

         sort(temp.begin(), temp.end());

         do {
             perms.push_back(temp);
         } while (next_permutation(temp.begin(), temp.end()));

         int n = perms.size();

         for (int i = 0; i < n; i++) {
             if (perms[i] == nums) {
                 nums = perms[(i + 1) % n];
                 return;
             }
         }
     }
 */