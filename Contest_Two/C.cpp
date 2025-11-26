#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    long long n, x; cin >> n >> x;

    long long smaller[n];
    long long greater[n];
    
    long long val, l, m;
    l = m = 0;

    while (n--) {
        cin >> val;
        if (val < x) {
            smaller[l++] = val;
        }
        else if (val > x) {
            greater[m++] = val;
        }
    }

    for (int i = 0; i < l; i++) 
        cout << smaller[i] << " ";

    for (int i = 0; i < m; i++) 
        cout << greater[i] << " ";
    
    
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 