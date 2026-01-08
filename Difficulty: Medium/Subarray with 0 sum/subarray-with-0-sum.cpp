class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        int prefix[arr.size()];
        prefix[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            prefix[i]= prefix[i-1]+arr[i];
            if(arr[i]==0){
                return true;
            }
        }
        unordered_set<int> hs;
        for(int i=0;i<arr.size();i++){
            if(hs.find(prefix[i]) != hs.end() || prefix[i]==0){
                return true;
            }
            else{
                hs.insert(prefix[i]);
            }
        }
        return false;
    }
};