class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        set<int> ans(arr.begin(), arr.end());
        vector<int> res(ans.begin(), ans.end());
        return res;
    }
};