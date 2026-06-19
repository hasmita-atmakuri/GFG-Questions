

class Solution {
  public:
    vector<int> primePairs(int n) {
        vector<int> primes;
        
        for(int i=2;i<=n;i++){
            bool isPrime=true;
            
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    isPrime=false;
                    break;  
                }
            }
            if(isPrime)
                primes.push_back(i);
        }
        
        vector<int> ans;
        for(int i=0;i<primes.size();i++){
            for(int j=0;j<primes.size();j++){
                if(1LL*primes[i]*primes[j]<=n){
                    ans.push_back(primes[i]);
                    ans.push_back(primes[j]);
                }
            }
        }
        return ans;
    }
};