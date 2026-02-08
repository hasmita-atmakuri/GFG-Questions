class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        unordered_set<int> at;
        for(int x:a){
            at.insert(x);
        }
        for(int x:b)
            at.insert(x);
        vector<int> ans(at.begin(), at.end());
        return ans;
    }
};