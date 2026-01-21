// User function Template for C++

class Solution {
  public:
    bool isPalin(int n){
        int rev=0;
        int a=n;
        while(n!=0){
            int rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        return a==rev;
    }
    bool isDigitSumPalindrome(int n) {
        int sum=0;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        return isPalin(sum);
    }
};