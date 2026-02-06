class Solution {
  public:
    int search(vector<int>& arr, int x) {
        for(int i=0;i<arr.size();i++){
            if(x==arr[i]){
                return i;
                break;
            }
        }
        return -1;
    }
};