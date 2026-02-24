class Solution {
  public:
    int isHappy(int N) {
        if(N==1 || N==7) return true;
        else if(N<10) return false;
        else{
            int sum=0;
            while(N>0){
                int t=N%10;
                sum+= t*t;
                N=N/10;
            }
            return isHappy(sum);
        }
    }
};