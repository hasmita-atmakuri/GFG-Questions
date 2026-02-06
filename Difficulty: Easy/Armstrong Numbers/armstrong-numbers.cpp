// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int a=n;
        int sum=0;
        while(a!=0){
            int d=a%10;
            sum+=pow(d,3);
            a/=10;
        }
        if(sum==n)
            return true;
        else 
            return false;
    }
};