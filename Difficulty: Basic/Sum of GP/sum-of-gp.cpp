class Solution {
  public:
    long sum_of_gp(long n, long a, long r) {
        if(r==1)
            return a*n;
        long ans1=a*(pow(r,n)-1);
        long int ans=ans1/(r-1);
        return ans;
    }
};