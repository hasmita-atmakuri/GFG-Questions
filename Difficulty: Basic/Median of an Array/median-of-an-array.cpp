class Solution {
  public:
    double findMedian(vector<int> &arr) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        double ans=0;
        if(n%2==0){
            return (arr[n/2-1]+arr[n/2])/2.0;
        }
        return arr[n/2];
    }
};