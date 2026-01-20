class Solution {
  public:
    vector<int> sieve(int n) {
        vector<bool> prime(n+1, true);
        for(int p=2;p*p<=n;p++){
            if(prime[p]==true){
                for(int i=p*p;i<=n;i+=p){
                    prime[i]=false;
                }
            }
        }
        vector<int> res;
        for(int ele=2; ele<=n;ele++){
            if(prime[ele])
                res.push_back(ele);
        }
        return res;
    }
};