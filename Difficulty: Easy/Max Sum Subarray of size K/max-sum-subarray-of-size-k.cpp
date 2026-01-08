class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        
        int currSum=0;
        int i=0,j=k-1;
        for(int a=i;a<=j;a++){ //window of size k
            currSum+=arr[a];
        }
        
        int sum=currSum;
        while(j<arr.size()-1){
            currSum=currSum-arr[i]+arr[j+1];//next subarray
            i++;
            j++;
            if(currSum>sum)
                sum=currSum;
        }
        return sum;
    }
};