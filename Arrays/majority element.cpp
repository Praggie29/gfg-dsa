class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int,int> hash;
        int n=arr.size();
        int size=n/2;
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(hash[arr[i]]>size){
              return arr[i];
            }
        }
        return -1;
    }
};