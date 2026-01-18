class Solution {
  public:
    bool isPalindrome(int n) {
        int a=n;
        int rem=0, rev=0;
        while(n!=0){
            rem=n%10;
            rev=(rev*10)+rem;
            n/=10;
        }
        if(rev==a)
            return true;
        else
            return false;
    }
};