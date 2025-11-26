#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int a, s; cin >> a >> s;

    if (s > a) {
        cout << "Samer is the winner" << endl;
    }
    else {
        cout << "Adham is the winner" << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 