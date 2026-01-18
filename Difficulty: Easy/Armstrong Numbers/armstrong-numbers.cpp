// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int a=n,b=n;
        int digi=0;
        int sum=0;
        while(n!=0){
            digi++;
            n/=10;
        }
        while(a!=0){
            int d=a%10;
            sum+=pow(d,digi);
            a/=10;
        }
        if(sum==b)
            return true;
        else 
            return false;
    }
};