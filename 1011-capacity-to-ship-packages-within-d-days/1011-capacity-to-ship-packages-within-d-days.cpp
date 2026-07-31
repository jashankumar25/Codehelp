class Solution {
public:
    int make_Possible(vector<int>& weights, int mid) {
        int sum = 0;
        int day = 1;
        for (int i = 0; i < weights.size(); i++) {
            sum = sum + weights[i];
            if (sum > mid) {
                day++;
                sum=weights[i];
            } 
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int i = *max_element(begin(weights), end(weights));
        int j=0;
        for (int i = 0; i < weights.size(); i++) {
            j += weights[i];
        }
        int ans = j;
        while (i <= j) {
            int mid = i + (j - i) / 2;

            if (make_Possible(weights, mid) <= days) {
                ans = mid;
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return ans;
    }
};