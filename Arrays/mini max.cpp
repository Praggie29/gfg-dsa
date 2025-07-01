class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int n=arr.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
                mini = min(arr[i],mini);
                maxi=max(arr[i],maxi);
        }
        return {mini,maxi};
        
    }
};