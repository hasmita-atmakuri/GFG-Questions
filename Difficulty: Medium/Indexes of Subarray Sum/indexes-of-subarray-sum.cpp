class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int i=0,j=0,sum=arr[0];
        vector<int> ans;
        while(i<arr.size() && j<arr.size()){
            if(sum == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(sum<target && j<arr.size()-1){
                j++;
                sum+=arr[j];
            }
            else{
                sum-=arr[i];
                i++;
            }
        }
        return {-1};
    }
};