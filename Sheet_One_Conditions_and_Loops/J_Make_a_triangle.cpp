#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long minutes = 0;

    if (a + b <= c) {
        minutes += c - (a + b) + 1;
        a += c - (a + b) + 1;
    }

    if (a + c <= b) {
        minutes += b - (a + c) + 1;
        c += b - (a + c) + 1;
    }

    if (c + b <= a) {
        minutes = a - (c + b) + 1;
        b += a - (c + b) + 1;
    }

    cout << minutes << endl;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

