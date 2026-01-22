class Solution {
  public:
    vector<int> count(string s) {
        int low=0,up=0,special=0,num=0;
        vector<int> ans;
        for(int i=0;i <s.length();i++){
            if(islower(s[i]))
                low++;
            else if(isupper(s[i]))
                up++;
            else if(isdigit(s[i]))
                num++;
            else
                special++;
        }
        ans.push_back(up);
        ans.push_back(low);
        ans.push_back(num);
        ans.push_back(special);
        return ans;
    }
};