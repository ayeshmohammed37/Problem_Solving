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

    for (int i = 1; i <= 10; i++) {
        cout << i << " x " << n << " = " << (i * n) << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

