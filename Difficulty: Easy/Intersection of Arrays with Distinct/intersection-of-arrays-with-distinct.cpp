class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        unordered_set<int> st(a.begin(), a.end());
        int cnt=0;
        for(int x:b){
            if(st.find(x)!=st.end()){
                cnt++;
            }
        }
        return cnt;
    }
};