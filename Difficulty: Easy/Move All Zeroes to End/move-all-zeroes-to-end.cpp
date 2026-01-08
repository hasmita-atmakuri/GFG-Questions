class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int i=0;
        while(i<arr.size() && arr[i]!=0)
            i++;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]!=0){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                i++;
            }
        }
    }
};