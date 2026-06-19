class Solution {
  public:
    int nthFibonacci(int n) {
        int a=0, b=1,c=0;
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        for(int i=1;i<=n;i++){
            a=b;
            b=c;
            c=a+b;
        }
        return c;
    }
};