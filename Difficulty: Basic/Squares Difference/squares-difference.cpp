
// User function Template for C++
class Solution {
  public:
    long long int squaresDiff(int N) {
        // code here
        
        long long int sum1= (N*(N+1))/2;
        long long int sum2=0;
        for(int i=1;i<=N;i++){
            sum2+=pow(i,2);
        }
        sum1=pow(sum1,2);
        long long int ans=abs(sum2-sum1);
        return ans;
    }
};