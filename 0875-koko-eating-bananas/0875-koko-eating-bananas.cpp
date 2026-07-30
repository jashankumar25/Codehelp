class Solution {
public:
    long long isvalid(vector<int>& piles, int mid) {
        long long actualhours = 0;
        for (int i = 0; i < piles.size(); i++) {
            actualhours = actualhours + piles[i] / mid;

            if (piles[i] % mid != 0)
                actualhours++;
        }
        return actualhours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int i = 1;
        int j = *max_element(piles.begin(), piles.end());
        int ans;
        while (i <= j) {
            int mid = i + (j - i) / 2;

            if (isvalid(piles, mid) <= h) {
                ans = mid;
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return ans;
    }
};