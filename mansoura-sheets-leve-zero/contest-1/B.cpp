#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    string s;
    cin >> s;

    string pass = "208241";
    int res = pass.compare(s);
    if (res == 0) {
        cout << "Yes" << endl;
    }
    else { 
        cout << "No" << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

