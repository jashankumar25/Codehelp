class Solution {
public:
    int make_possible(vector<int>& bloomDay, int k, int mid) {
        int bouqcount = 0;
        int consectivecount = 0;

        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid)
                consectivecount++;
            else {
                consectivecount = 0;
            }

            if (consectivecount == k) {
                bouqcount++;
                consectivecount = 0;

            }
        }
        return bouqcount;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int i = 1;
        int j = *max_element(bloomDay.begin(), bloomDay.end());
        //*max_element(begin(bloomDay), end(bloomDay));
        int ans = -1;

        while (i <= j) {
            int mid = i + (j - i) / 2;

            if (make_possible(bloomDay, k, mid) >= m) {
                ans = mid;
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return ans;
    }
};