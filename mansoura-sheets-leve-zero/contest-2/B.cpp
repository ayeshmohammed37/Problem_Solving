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
        string a; cin >> a;

        string b = a;
        reverse(b.begin(), b.end());
        for (int i = 0; i < b.size(); i++) {
            if (b[i] == 'p')
                 b[i] = 'q';
            else if (b[i] == 'q')
                 b[i] = 'p';
        }
        cout << b << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 