class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // Complete the function
        int n=arr.size();
        unordered_map<int,int>hash;
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(hash[arr[i]]==1){
                return arr[i];
            }
        }
        return 0;
    }
};
