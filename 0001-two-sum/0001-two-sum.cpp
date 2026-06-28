class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            int complement=target-nums[i];

            if(mp.find(complement)!=mp.end())
            {
                return{ mp[complement],i};
            }

            mp[nums[i]]=i;
        }

        return{-1,-1};
    }
};
/* ------------------------------------------------------
vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int sum=nums[i]+nums[j];
                if(target==sum)
                {
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
 ------------------------------------------------------
int binarysearch(vector<int>& nums, int left, int right, int complement)
    {
        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (complement == nums[mid])
                return mid;

            if (complement < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }

        return -1;
    }

    vector<int> twoSum(vector<int>& nums, int target)
    {
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int complement = target - nums[i];

            int b = binarysearch(nums, i + 1, n - 1, complement);

            if (b != -1)
                return {i, b};
        }

        return {-1, -1};
    }
 
    */