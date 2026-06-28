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