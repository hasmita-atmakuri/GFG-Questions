class Solution {
  public:
    bool isVowel(char s){
        return s=='a' || s=='e' || s=='i' || s=='o' || s=='u';
    }
    string modify(string& s){
        int i=0, j=s.length()-1;
        while(i<j){
            while(i<j && !isVowel(s[i]))    
                i++;
            while(i<j && !isVowel(s[j]))    
                j--;
            if(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};