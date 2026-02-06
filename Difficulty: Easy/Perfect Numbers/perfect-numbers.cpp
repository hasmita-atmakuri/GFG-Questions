class Solution {
  public:
    bool isPerfect(int n) {
        int sum=1;
        if(n==1)
            return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                sum+=i;
                if(i!= n/i)
                    sum+=(n/i);
            }
        }
        return sum==n;
    }
};