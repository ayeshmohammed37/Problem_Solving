#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    long long l, r, n;
    cin >> l >> r >> n;

    long long ans = r - l + 1 -((r/n) - ((l-1)/n));
    cout << ans << endl;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 