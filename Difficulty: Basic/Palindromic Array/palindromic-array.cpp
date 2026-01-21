/*Complete the function below*/

class Solution {
  public:
    bool isPalin(int n){
        int rev=0;
        int a=n;
        while(n!=0){
            int rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        return a==rev;
    }
    bool isPalinArray(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            if(!isPalin(arr[i]))
                return false;
        }
        return true;
    }
};