
class Solution {
  public:
    vector<int> find(int l, int b, int h) {
        vector<int> ans;
        int sa=2*(l*b + b*h + h*l);
        int v=l*b*h;
        ans.push_back(sa);
        ans.push_back(v);
        return ans;
    }
};