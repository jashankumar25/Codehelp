class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;

        int leftMax = 0, rightMax = 0;
        int water = 0;

        while (left < right) {

            if (height[left] < height[right]) {

                leftMax = max(leftMax, height[left]);
                water += leftMax - height[left];

                left++;
            } else {

                rightMax = max(rightMax, height[right]);
                water += rightMax - height[right];

                right--;
            }
        }

        return water;
    }
};
/* vector<int> getleftmax(vector<int>& height) {
        int n = height.size();

        vector<int> leftmax(n);
        leftmax[0] = height[0];
        for (int i = 1; i < n; i++) {
            leftmax[i] = max(leftmax[i - 1], height[i]);
        }
        return leftmax;
    }
    vector<int> getrightmax(vector<int>& height) {
        int n = height.size();
        vector<int> rightmax(n);
        rightmax[n - 1] = height[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            rightmax[i] = max(rightmax[i + 1], height[i]);
        }
        return rightmax;
    }
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMax = getleftmax(height);
        vector<int> rightMax = getrightmax(height);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int h = min(leftMax[i], rightMax[i]) - height[i];
            sum += h;
        }
        return sum;
    }
------------------------
int trap(vector<int>& height) {

        int n = height.size();
        int water = 0;

        for(int i=0;i<n;i++){

            int leftMax = height[i];
            int rightMax = height[i];

            // Left maximum
            for(int j=0;j<i;j++)
                leftMax = max(leftMax,height[j]);

            // Right maximum
            for(int j=i+1;j<n;j++)
                rightMax = max(rightMax,height[j]);

            water += min(leftMax,rightMax)-height[i];
        }

        return water;
    }*/