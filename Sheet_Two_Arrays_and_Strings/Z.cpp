#include <bits/stdc++.h>

using namespace std;

// void Fast_IO(){
//     ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
//     #endif
// }

void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    string s;
    cin >> s; 

    long long q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;

        bool flag = true;
        for (int i = l-1, j = r-1; i < j; i++, j--) {
            if (s[i] != s[j]) {
                flag = false;
            }
        }
        if (flag) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}

int main() {
    fastIO();
    // Fast_IO();
    solve();
     
    return 0;
} 