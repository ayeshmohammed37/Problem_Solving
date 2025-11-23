#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    long long t, n, s1, s2, s;
    cin >> t;

    while (t--) {
        cin >> n;
        s1 = 0;
        for (long long i = 1; i <= n; i++) {
            s1 += i*i;
        }
        s2 = (long long)pow(n * (n+1) / 2, 2);
        s = s2 - s1;
        cout << s << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

