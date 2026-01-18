class Solution {
  public:
    int factorial(int n) {
        int fact=1;
        for(int i=;i<=n;i++)
            fact*=i;
        return fact;
    }
};