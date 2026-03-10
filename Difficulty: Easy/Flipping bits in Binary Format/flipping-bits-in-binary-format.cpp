// User function Template for C++

class Solution {
  public:
    vector<string> flipBits(long int N) {
        string binary = bitset<32>(N).to_string();
        string flip="";
        for(char c:binary){
            if(c=='1')
                flip+='0';
            else
                flip+='1';
        }
        unsigned long long res=0;
        for(char c:flip)
            res=res*2+(c-'0');
        reverse(flip.begin(), flip.end());
        return {to_string(res), flip};
    }
};