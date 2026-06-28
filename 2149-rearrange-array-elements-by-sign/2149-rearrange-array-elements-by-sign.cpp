class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int pos=0,neg=1;
        for(auto it:nums)
        {
            if(it>0)
            {
                ans[pos]=it;
                pos=pos+2;
            }
            else{
                ans[neg]=it;
                neg=neg+2;
            }
        }
        return ans;
    }
};
/*class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();

        // Step 1: Partition positives and negatives
        int left = 0, right = n - 1;

        while (left <= right) {

            while (left < n && nums[left] > 0)
                left++;

            while (right >= 0 && nums[right] < 0)
                right--;

            if (left < right)
                swap(nums[left], nums[right]);
        }

        // left is the index of the first negative element
        int pos = 1;     // Odd indices
        int neg = left;  // First negative

        // Step 2: Place negatives at odd indices
        while (pos < n && neg < n) {
            swap(nums[pos], nums[neg]);
            pos += 2;
            neg++;
        }

        return nums;
    }
};*/
/*vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                arr1.push_back(nums[i]);

            if (nums[i] < 0)
                arr2.push_back(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                nums[i] = *(arr1.begin());
                arr1.erase(arr1.begin());

            } else {
                nums[i] = *(arr2.begin());
                arr2.erase(arr2.begin());
            }
        }
        return nums;
    }*/
