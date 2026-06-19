class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> st;
        for(char x: s){
            if(x=='(' || x=='[' || x=='{'){
                st.push(x);
            }
            else if(x==')' || x==']' || x=='}'){
                if(st.empty())
                    return false;
                char top= st.top();
                if((x==')' && top!='(') || (x==']' && top!='[') || (x=='}' && top!='{'))
                    return false;
                st.pop();
            }
            
        }
        return st.empty();
    }
};