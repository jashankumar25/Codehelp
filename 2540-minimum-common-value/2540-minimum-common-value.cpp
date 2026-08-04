class Solution {
public:
    int binary_search(vector<int>& nums2, int num) {
        int l = 0, r = nums2.size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums2[mid] == num)
                return num;
            if (nums2[mid] > num)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return -1;
    }
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for (auto num : nums1) {
            if (binary_search(nums2, num) != -1)
                return num;
        }
        return -1;
    }
}; /*int getCommon(vector<int>& nums1, vector<int>& nums2) {
          int i = 0, j = 0;

          while (i < nums1.size() && j < nums2.size()) {
              if (nums1[i] == nums2[j]) {
                  return nums1[i];
              }
              if (nums1[i] < nums2[j]) {
                  i++;
              } else
                  j++;
          }
          return -1;
      }

      --------------------
       int getCommon(vector<int>& nums1, vector<int>& nums2) {
         unordered_set<int> st(nums1.begin(), nums1.end());

         for (auto num : nums2) {
             if (st.find(num) != st.end()) {
                 return num;
             }
         }
         return -1;
     }*/