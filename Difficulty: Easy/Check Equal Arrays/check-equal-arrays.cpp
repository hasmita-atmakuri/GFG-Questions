class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool flag = true;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i])
                flag=false;
        }
        return flag;
    }
};