class Solution {
  public:
    int gcd(int a, int b) {
        int t1=a;
        int t2=b;
        while(t2!=0){
            int rem=t1%t2;
            t1=t2;
            t2=rem;
        }
        return t1;
    }
};
