#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int t, a, b, c;
    
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if (a == b+c)
            cout << "YES" << endl;
        else if (b == a+c)
            cout << "YES" << endl;
        else if (c == a+b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

