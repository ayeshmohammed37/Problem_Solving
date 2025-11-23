#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    long long l, r;
    cin >> l >> r;

    long long lsum = (l-1) * (l) / 2;
    long long rsum = r * (r+1) / 2;
    cout << rsum - lsum << endl;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

