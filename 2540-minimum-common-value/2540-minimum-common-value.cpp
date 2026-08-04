class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st(nums1.begin(), nums1.end());

        for (auto num : nums2) {
            if (st.find(num) != st.end()) {
                return num;
            }
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
     }*/