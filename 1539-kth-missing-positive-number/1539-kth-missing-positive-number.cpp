class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int i = 0;
        int j = arr.size() - 1;
        int mid = -1;
        while (i <= j) {

            mid = i + (j - i) / 2;
            int missingno_till_mid = arr[mid] - (mid + 1);

            if (missingno_till_mid < k) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
        return k + i;
    }
};
/*
    int findKthPositive(vector<int>& arr, int k) {
        int num = 1;
        int i = 0;
        int n = arr.size();

        while (i < n && k > 0) {
            if (arr[i] == num)
                i++;
            else {
                k--;
            }
            num++;
        }
        while (k--) //{1,2,3} ,k=2
        {
            num++;
        }
        return num - 1;
    }
*/