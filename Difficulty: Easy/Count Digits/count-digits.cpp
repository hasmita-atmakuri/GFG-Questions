class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int cnt=0;
        int a=n;
        while(n!=0){
            int digi=n%10;
            if(digi!=0 && a%digi==0)
                cnt++;          
            n/=10;
        }
        return cnt;
    }
};