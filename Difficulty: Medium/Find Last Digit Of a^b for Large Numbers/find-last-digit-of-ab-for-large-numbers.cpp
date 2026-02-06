class Solution {
  public:
    int getLastDigit(string a, string b) {
        if(b=="0")
            return 1;
        int ld=a.back()-'0';
        
        int expo=0;
        for(int c:b){
            expo=(expo*10 +(c-'0'))%4;
        }
        
        if(expo==0)
            expo=4;
        int res=1;
        for(int i=0;i<expo;i++){
            res=(res*ld)%10;
        }
        
        return res;
    }
};