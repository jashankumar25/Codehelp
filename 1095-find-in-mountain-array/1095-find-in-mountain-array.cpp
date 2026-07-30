/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int binarySearch(MountainArray& mountainArr, int l, int r, int target,
                     bool asc) {
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int val = mountainArr.get(mid);

            if (val == target)
                return mid;

            if (asc) {
                if (val > target)
                    r = mid - 1;
                else
                    l = mid + 1;
            } else {
                if (val > target)
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray& mountainArr) {
        int i = 0;
        int j = mountainArr.length() - 1;

        while (i < j) {
            int mid = i + (j - i) / 2;

            if (mountainArr.get(mid) < mountainArr.get(mid + 1))
                i = mid + 1;
            else
                j = mid;
        }
        int peek = i;

        int indx = binarySearch(mountainArr, 0, peek, target, true);

        if (indx != -1)
            return indx;

        return binarySearch(mountainArr, peek + 1, mountainArr.length() - 1,
                            target, false);
    }
};