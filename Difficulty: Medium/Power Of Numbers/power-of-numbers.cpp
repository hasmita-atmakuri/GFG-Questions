class Solution {
  public:
    int reverseExponentiation(int n) {
        int a=n;
        int rev=0;
        while(n!=0){
            int rem=n%10;
            rev=(rev*10)+rem;
            n/=10;
        }
        int ans=pow(a,rev);
        return ans;
    }
};