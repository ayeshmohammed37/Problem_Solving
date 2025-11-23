#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int a, b, val;
    cin >> a >> b;
    val = a - b;
    if (val > 0) {
        cout << val << endl;
    }
    else {
        cout << 0 << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

