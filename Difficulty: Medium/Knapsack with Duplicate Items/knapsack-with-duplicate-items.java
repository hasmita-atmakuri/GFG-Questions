class Solution {
    public int knapSack(int val[], int wt[], int capacity) {
        // code here
        int n=val.length;
        int W= capacity;
        int [][] dp=new int[n+1][W+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<W+1;j++){
                int take=0, notTake=0;
                if(i==0 || j==0){
                    dp[i][j]=0;
                    continue;
                }
                if(wt[i-1]<=j){
                    dp[i][j]= Math.max(val[i-1] + dp[i][j-wt[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]= dp[i-1][j];
                }
            }
        }
        return dp[n][W];
    }
}