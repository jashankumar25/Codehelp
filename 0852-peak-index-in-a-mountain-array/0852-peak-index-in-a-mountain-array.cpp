class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         int i=0;
         int j=arr.size()-1;

         while(i<j)
         {
             int mid=i+(j-i)/2;
             if(arr[mid]<arr[mid+1])
             {
                 i=mid+1;
             }
             else
             {
                 j=mid;
             }
         }
         return i;
     }
}; /* 
     int peakIndexInMountainArray(vector<int>& arr) {
        int i = 0;
        int j = arr.size() - 1;

        while (i < j && arr[i] < arr[i + 1]) {
            i++;
        }
        return i;
    }
 int peakIndexInMountainArray(vector<int>& arr) {
         int max=INT_MIN;
         int maxIndex=-1;
         for(int i=0;i<arr.size();i++)
         {
             if(arr[i]>max)
             {
                 max=arr[i];
                 maxIndex=i;
             }
         }
         return maxIndex;
     }*/