class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        
        int n1=s1.length();
        int n2=s2.length();
        
        if(n1==n2){
            for(int i=0;i<n1;i++){
                if(s1[i]!=s2[i])
                    return false;
            }
        }
        else
            return false;
        return true;
    }
};