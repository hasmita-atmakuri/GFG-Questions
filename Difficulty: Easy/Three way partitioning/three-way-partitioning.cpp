class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int>& arr, int a, int b) {
        // code here
        int i=0,j=0,k=arr.size();
        while(j<=k){
            if(arr[j]<a){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]= temp;
                i++;j++;
            }
            else if(arr[j]>b){
                int temp= arr[k];
                arr[k]=arr[j];
                arr[j]=temp;
                k--;
            }
            else
                j++;
        }
    }
};