// User function Template for C++

class Solution {
  public:
    int product(int arr[], int n) {
        int pro=1;
        for(int i=0;i<n;i++){
            pro*=arr[i];
        }
        return pro;
    }
};