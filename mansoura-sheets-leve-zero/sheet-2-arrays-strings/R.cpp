#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int n;
    cin >> n;
    
    while (n--) {
        string s;
        cin >> s;

        if (s.length() > 10) {
            cout << s[0] << (s.length() - 2) << s[s.length()-1] << endl;
        }
        else {
            cout << s << endl;
        }
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 