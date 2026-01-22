
class Solution {
  public:
    int countCamelCase(string s) {
        int cnt;
        for(int i=0;i<s.length();i++){
            if(isupper(s[i]))
                cnt++;
        }
        return cnt;
    }
};