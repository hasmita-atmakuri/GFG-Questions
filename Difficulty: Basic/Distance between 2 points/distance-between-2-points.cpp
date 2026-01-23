class Solution {
  public:
    int distance(int x1, int y1, int x2, int y2) {
        int x=pow((x2-x1),2);
        int y=pow((y2-y1),2);
        double ans=sqrt(x+y);
        return round(ans);
    }
};