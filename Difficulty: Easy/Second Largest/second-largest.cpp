class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int maxi=arr[0];
        int maxi2=-1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>maxi){
                maxi2=maxi;
                maxi=arr[i];
            }
            else if(maxi2<arr[i] && arr[i]!=maxi)
                maxi2=arr[i];
        }
        return maxi2;
    }
};