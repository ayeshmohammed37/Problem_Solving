#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    long long n, m;
    cin >> n >> m;
    long long sum = (n % 10) + (m % 10);
    cout << sum << endl;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

