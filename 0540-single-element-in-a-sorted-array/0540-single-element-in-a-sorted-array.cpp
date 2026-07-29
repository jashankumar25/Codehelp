class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int i = 0;
        int j = arr.size() - 1;
        while (i < j) {
            int mid = i + (j - i) / 2;

            if (mid % 2 == 1)
                mid--;
            if (arr[mid] == arr[mid + 1])
                i = mid + 2;
            else
                j = mid;
        }
        return arr[j]; // i//mid
    }
}; /*
  int singleNonDuplicate(vector<int>& arr) {
        int i = 0;
        int j = arr.size() - 1;
        while (i < j) {
            int mid = i + (j - i) / 2;

            bool isEven = ((j - mid) % 2 == 0);
            if (arr[mid] == arr[mid + 1]) {
                if (isEven)
                    i = mid + 2;
                else
                    j = mid - 1;
            } else {
                if (isEven)
                    j = mid;
                else
                    i = mid + 1;
            }
        }
        return arr[j];
    }
  int singleNonDuplicate(vector<int>& nums) {
         int ans = 0;

         for (int x : nums) {
             ans ^= x;
         }

         return ans;
     }
 int singleNonDuplicate(vector<int>& nums) {
         unordered_map<int, int> mp;

         for (auto it : nums) {
             mp[it]++;
         }

         for (auto it : mp) {
             if (it.second == 1) {
                 return it.first;
             }
         }
         return -1;
     }*/
