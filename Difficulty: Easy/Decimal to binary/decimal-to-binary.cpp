class Solution {
  public:
    string decToBinary(int n) {
        string res="";
        int bit=0;
        while(n>0){
            bit=n%2;
            res=to_string(bit)+res;
            n/=2;
        }
        return res;
    }
};