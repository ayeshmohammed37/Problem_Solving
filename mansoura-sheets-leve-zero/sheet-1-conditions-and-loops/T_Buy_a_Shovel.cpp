#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int k, r;
    int shovels = 1;

    cin >> k >> r;

    while ((k * shovels) % 10 != 0 && (k * shovels) % 10 != r) {
        shovels++;
    }

    cout << shovels << endl;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

