class Solution {
  public:
    bool isPrime(int n){
        if(n==1)
            return false;
        if(n==2)
            return true;
        if(n%2==0)
            return false;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0)
                return false;
        }
        return true;
    }
    int primeProduct(int L, int R) {
        long long m = 1e9 + 7;
        long long product = 1;
        bool found = false;

        for(int i = L; i <= R; i++){
            if(isPrime(i)){
                found = true;
                product = (product * i) % m;
            }
        }

        if(!found)
            return 1;
        return product;
    }
};