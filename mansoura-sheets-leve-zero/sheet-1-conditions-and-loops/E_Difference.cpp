#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long difference = (a * b) - (c * d);
    cout << "DIFERENCA = " << difference << endl;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

