class Solution {
  public:
    string isAutomorphic(int n) {
        int a=n;
        int cnt=0;
        while(n!=0){
            cnt++;
            n/=10;
        }
        int sq=pow(a,2);
        int po=pow(10,cnt);
        if(a==(sq%po)){
            return "Automorphic";
        }
        else
            return "Not Automorphic";
    }
};