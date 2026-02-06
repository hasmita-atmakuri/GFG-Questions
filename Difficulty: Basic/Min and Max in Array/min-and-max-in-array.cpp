class Solution {
  public:
    int getMaxi(vector<int> &arr){
        int maxi=arr[0];
        for(int i=1;i<arr.size();i++){
            if(maxi<arr[i])
                maxi=arr[i];
        }
        return maxi;
    }
    int getMini(vector<int> &arr){
        int mini=arr[0];
        for(int i=1;i<arr.size();i++){
            if(mini>arr[i])
                mini=arr[i];
        }
        return mini;
    }
    vector<int> getMinMax(vector<int> &arr) {
        int maxi=getMaxi(arr);
        int mini=getMini(arr);
        return {mini, maxi};
    }
};