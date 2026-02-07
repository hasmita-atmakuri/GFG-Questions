class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        
        int n=arr.size();
        int hasharr[n+1]={0};
        for(int i=0;i<n;i++){
            hasharr[arr[i]]++;
        }
        int repeat=-1, miss=-1;
        for(int i=1;i<n+1;i++){
            if(hasharr[i]==2)
                repeat=i;
            else if(hasharr[i]==0)
                miss=i;
        }
        return {repeat,miss};
    }
};