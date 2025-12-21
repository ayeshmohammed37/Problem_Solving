#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    string s;
    cin >> s;

    bool flag = true;
    
    
    if (isupper(s[0])) {
        for (int i = 0; i < s.length(); i++) {
            if (islower(s[i])) {
                flag = false;
                break;
            }
        }
    }
    else if (islower(s[0])) {
        for (int i = 1; i < s.length(); i++) {
            if (islower(s[i])) {
                flag = false;
                break;
            }
        }
    }

    if (flag) {
        for (int i = 0; i < s.length(); i++) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            }
            else {
                s[i] = tolower(s[i]);
            }
        }
    }
    
    cout << s << endl;
    
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 