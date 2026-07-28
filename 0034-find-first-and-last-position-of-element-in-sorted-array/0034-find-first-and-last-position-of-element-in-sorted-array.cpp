class Solution {
public:

    int firstOccurrence(vector<int>& nums,int target)
    {
        int low=0;
        int high=nums.size()-1;
        int ans=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(nums[mid]==target)
            {
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }

        return ans;
    }

    int lastOccurrence(vector<int>& nums,int target)
    {
        int low=0;
        int high=nums.size()-1;

        int ans=-1;

        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(nums[mid]==target)
            {
                ans=mid;
                low=mid+1;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target)
    {
        return {firstOccurrence(nums,target),
                lastOccurrence(nums,target)};
    }
};
/*
    vector<int> searchRange(vector<int>& arr, int target) {

        int indxlower =
            lower_bound(arr.begin(), arr.end(), target) - arr.begin();
        int indxupper =
            upper_bound(arr.begin(), arr.end(), target) - arr.begin() - 1;

        if (indxlower == arr.size() || arr[indxlower] != target)
            return {-1, -1};

        return {indxlower, indxupper};
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, sec = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                if (first == -1)
                    first = i;

                        sec = i;
            }
        }
        return {first, sec};
    }
*/