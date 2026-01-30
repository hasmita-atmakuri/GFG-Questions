// User function Template for C++
class Solution {
  public:
    long long int isPerfectSquare(long long int n) {
        long long int a=sqrt(n);
        if(a*a==n)
            return true;
        else
            return false;
    }
};