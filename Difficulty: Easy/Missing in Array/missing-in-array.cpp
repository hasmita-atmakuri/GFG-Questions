class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        
        long long s1 = 0;

        int n=arr.size();
        long long s = ((long long)(n+1)*(n+2))/2;
        for(int i=0;i<n;i++){
            s1+=arr[i];
        }
        int ans=0;
        ans=s-s1;
        return ans;
    }
};