class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        int start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            bool leftOk=(mid==0) || (arr[mid]>=arr[mid-1]);
            bool rightOk=(mid==n-1) || (arr[mid]>=arr[mid+1]);
            if(leftOk && rightOk){
                return mid;
            }
            else if(mid>0 && arr[mid-1]>arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return -1;
    }
};