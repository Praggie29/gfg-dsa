class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> result;
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        for(auto& it:hash){
            if(it.second>1){
                result.push_back(it.first);
              
            }
        }
        return result;
    }
};