#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    string n, m; cin >> n >> m;

    if (n == m) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 