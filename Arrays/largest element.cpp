class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int largestElement=0;
        for(int i=0;i<n;i++){
            if(arr[i]>largestElement){
                largestElement=arr[i];
            }
        }
        return largestElement;
    }
};
