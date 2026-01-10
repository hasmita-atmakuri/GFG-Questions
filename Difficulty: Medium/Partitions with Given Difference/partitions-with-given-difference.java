class Solution {
    // Function to calculate the number of subsets with a given sum
    
    public static int subset(int n, int sum, int[] arr, int[][] dp){
        if(n==0){
            if(sum==0)
                return 1;
            return 0;
        }
        if(dp[n][sum] == -1){
            if(arr[n-1]<=sum){
                dp[n][sum]= (subset(n-1, sum, arr, dp) + subset(n-1, sum-arr[n-1], arr, dp));
            }
            else
                dp[n][sum]= subset(n-1,sum, arr, dp);
        }
        else{
            return dp[n][sum];
        }
        return dp[n][sum];
    }
    
    public int countPartitions(int[] arr, int k){
        int n=arr.length;
        int sum=0;
        for(int i: arr){
            sum+=i;
        }
        if((sum+k) %2 !=0 || sum<k)
            return 0;
            
        int ans= (sum+k)/2;
        
        int [][] dp= new int[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            Arrays.fill(dp[i], -1);
        }
        return subset(n, ans, arr, dp);
    }
}