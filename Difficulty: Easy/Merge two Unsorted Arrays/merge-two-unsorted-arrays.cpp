class Solution {
  public:
    vector<int> sortedMerge(vector<int>& a, vector<int>& b) {
        vector<int> res;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int i=0, j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]<=b[j]){
                res.push_back(a[i]);
                i++;
            }
            else if(a[i]>b[j]){
                res.push_back(b[j]);
                j++;
            }
        }
        while(i<a.size()){
            res.push_back(a[i]);
            i++;
        }
        while(j<b.size()){
            res.push_back(b[j]);
            j++;
        }
        return res;
    }
};
