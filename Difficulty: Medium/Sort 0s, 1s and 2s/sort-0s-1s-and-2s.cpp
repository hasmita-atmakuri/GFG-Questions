class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        /*int zeros, ones, twos;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0)
                zeros++;
            if(arr[i]==1)
                ones++;
            if(arr[i]==2)
                twos++;
        }
        while
        */
        int i=0,j=0,k=arr.size()-1;
        while(j<=k){
            if(arr[j]==0){
                int temp= arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                i++;
                j++;
            }
            else if(arr[j]==2){
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