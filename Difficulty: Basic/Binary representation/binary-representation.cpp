class Solution {
  public:
    string getBinaryRep(int n) {
        string ans="";
        while(n>0){
            ans=char('0'+(n%2))+ans;
            n/=2;
        }
        while(ans.length()<32){
            ans='0'+ans;
        }
        return ans;
    }
};