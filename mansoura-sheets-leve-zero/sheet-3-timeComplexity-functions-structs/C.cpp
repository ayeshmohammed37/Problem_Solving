#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    long long n;
    cin >> n;

    long long sum = n * (n + 1) * (2 * n + 1) / 6;

    cout << sum;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 