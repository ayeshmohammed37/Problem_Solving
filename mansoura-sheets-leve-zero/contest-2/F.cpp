#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int t; cin >> t;

    while (t--) {
        string s; cin >> s;

        string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string reversed = alpha;
        reverse(reversed.begin(), reversed.end());
        
        int l = s.length();

        for (int i = 0; i < l; i++) {
            if (isupper(s[i])) {
                int index = s[i] - 'A';
                s[i] = tolower(reversed[index]);
            }
            else {
                s[i] = toupper(s[i]);   
                int index = s[i] - 'A';    
                s[i] = toupper(reversed[index]);         
            }
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 