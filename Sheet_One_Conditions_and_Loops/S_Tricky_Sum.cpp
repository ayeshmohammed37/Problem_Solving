#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    long long t, n, sum, p;
    p = 0;
    cin >> t;
    while (t--) {
        cin >> n;
        sum = (n * (n+1)) / 2;
        
        for (long long i = 0; p <= n; i++) {
            p += (int)pow(2,i);
        }
        sum = sum - 2*p;
        cout << sum << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

