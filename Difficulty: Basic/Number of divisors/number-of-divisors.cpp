// User function Template for C++

class Solution {
  public:
    vector<int> divisors(int n){
        vector<int> ans;
        for(int i=1;i<=n;i++){
            if(n%i==0)
                ans.push_back(i);
        }
        return ans;
    }
    int countDivisors(int n) {
        vector<int> res;
        res=divisors(n);
        int cnt=0;
        for(int s:res){
            if(s%3==0)
                cnt++;
        }
        return cnt;
    }
};