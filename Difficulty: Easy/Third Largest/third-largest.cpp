class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int n=arr.size();
        return arr[n-3];
    }
};