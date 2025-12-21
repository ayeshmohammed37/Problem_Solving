#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {

    long long n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2 << endl;
    }
    else {
        cout << ((n/2) + 1) * -1 << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

