#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    long long v, a, b, c;

    cin >> v >> a >> b >> c;

    while (v >= 0) {
        if (v >= a) {
        v -= a;
        }
        else if (v < a) {
            cout << "F" << endl;
            break;
        }

        if (v >= b) {
            v -= b;
        }
        else if (v < b) {
            cout << "M" << endl;
            break;
        }

        if (v >= c) {
            v -= c;
        }
        else if (v < c) {
            cout << "T" << endl;
            break;
        }
    }
    
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

