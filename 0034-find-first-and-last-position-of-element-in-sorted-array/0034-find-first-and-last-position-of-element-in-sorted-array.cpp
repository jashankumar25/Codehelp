class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {

        int indxlower =
            lower_bound(arr.begin(), arr.end(), target) - arr.begin();
        int indxupper =
            upper_bound(arr.begin(), arr.end(), target) - arr.begin() - 1;

        if (indxlower == arr.size() || arr[indxlower] != target)
            return {-1, -1};

        return {indxlower, indxupper};
    }
};