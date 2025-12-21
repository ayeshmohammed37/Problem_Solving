#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;

    if (a <= b && a <= c) {
        cout << a << " ";
        if (b <= c) {
            cout << b << " " << c << endl;
        }
        else {
            cout << c << " " << b << endl;
        }
    }
    else if (b <= a && b <= c) {
        cout << b << " ";
        if (a <= c) {
            cout << a << " " << c << endl;
        }
        else {
            cout << c << " " << a << endl;
        }
    } 
    else {
        cout << c << " ";
        if (a <= b) {
            cout << a << " " << b << endl;
        }
        else {
            cout << b << " " << a << endl;
        }
    } 
    
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

