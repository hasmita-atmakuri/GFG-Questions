#include<string>

string transform(string S) {
    int n = S.length();
    
    for (int i = 0; i < n; i++) {
        S[i] = tolower(S[i]);
    }

    string result = "";
    int i = 0;

    while (i < n) {
        char ch = S[i];
        int cnt = 0;

        while (i < n && S[i] == ch) {
            cnt++;
            i++;
        }

        result += to_string(cnt);
        result += ch;
    }

    return result;
}
