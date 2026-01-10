// User function Template for Java

class Solution {
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
    static int findTargetSumWays(int N, int[] A, int k) {
        
        int sum=0;
        for(int i: A){
            sum+=i;
        }
        
        if(Math.abs(k)>sum)
            return 0;
        
        if((sum+k) %2 !=0 || sum<=k)
            return 0;
            
        int ans= (sum+k)/2;
        
        int [][] dp= new int[N+1][sum+1];
        for(int i=0;i<N+1;i++){
            Arrays.fill(dp[i], -1);
        }
        return subset(N, ans, A, dp);
    }
};