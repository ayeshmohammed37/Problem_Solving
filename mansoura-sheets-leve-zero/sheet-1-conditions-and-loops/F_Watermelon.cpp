#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int w;
    cin >> w;

    if (w == 2 || w % 2 != 0) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }

}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

