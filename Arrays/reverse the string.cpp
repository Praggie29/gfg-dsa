class Solution {
  public:
    string reverseString(string& s) {
        // code here
        string rev=" ";
        for(int i=s.length()-1;i>=0;i--){
            rev+=s[i];
        }
        return rev;
        
    }
};
