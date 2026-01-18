class Solution {
  public:
    vector<int> squareDifference(int n) {
        vector<int> ans;
        
        int a = floor(sqrt(n));      // Largest integer whose square <= n
        int b1 = a * a;              // Lower perfect square
        int b2 = (a + 1) * (a + 1);  // Upper perfect square
        
        int diff1 = abs(n - b1);
        int diff2 = abs(n - b2);
        
        if (diff1 <= diff2) {
            ans.push_back(b1);
            ans.push_back(diff1);
        } else {
            ans.push_back(b2);
            ans.push_back(diff2);
        }
        
        return ans;
    }
};