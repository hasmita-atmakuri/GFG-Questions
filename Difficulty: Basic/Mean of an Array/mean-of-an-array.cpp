class Solution {
  public:
    int findMean(vector<int>& arr) {
        int mean=0,sum=0;;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        mean=floor(sum/arr.size());
        return mean;
    }
};