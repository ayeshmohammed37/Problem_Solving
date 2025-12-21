#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    char s;
    int n, x;
    
    cin >> s >> n;

    while (n--) {
        cin >> x;
        for (int i = 0; i < x; i++) {
            cout << s;
        }
        cout << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

