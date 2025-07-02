#include <iostream>
#include <vector>
class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(hash[arr[i]]>1){
                return i+1;
            }
        }
        return -1;
    }
};