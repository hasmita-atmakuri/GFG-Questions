class Solution {
  public:
    vector<string> numberPattern(int N) {
        vector<string> ans;
        for(int i=1;i<=N;i++){
            string s="";
            for(int j=1;j<=i;j++){
                s+=to_string(j);
            }
            for(int j=i-1;j>=1;j--){
                s+=to_string(j);
            }
            ans.push_back(s);
        }
        return ans;
    }
};