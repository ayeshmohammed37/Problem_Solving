#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int a, b, c, d, t;

    cin >> t;

    while (t--) {
        cin >> a >> b >> c >> d;
        int participants = 0;

        if (b > a) 
            participants++;
        if (c > a) 
            participants++;
        if (d > a) 
            participants++;
        
        cout << participants << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

