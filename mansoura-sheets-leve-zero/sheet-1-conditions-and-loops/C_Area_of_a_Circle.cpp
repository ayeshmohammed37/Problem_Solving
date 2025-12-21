#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    cout << fixed << setprecision(4);
    double r;
    double pi = 3.14159;
    cin >> r;
    double a = pi * r * r;
    cout << "A=" << a << endl;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

