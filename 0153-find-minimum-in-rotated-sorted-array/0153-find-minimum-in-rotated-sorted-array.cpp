class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;

        while(s<e)
        {
            int mid=s+(e-s)/2;

            if(nums[mid]>nums[e])
            {
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return nums[s];//s=e==mid
    }
};
/*  int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        return  nums[0];

    }
----------------------
int findMin(vector<int>& nums) {
        int r = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < r) {
                r = nums[i];
            }
        }
        return r;
    }*/
