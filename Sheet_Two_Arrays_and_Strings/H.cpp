#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int n, q; cin >> n >> q;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++) {
        int l, r, x; cin >> l >> r >> x;
        int counter = 0;
        for (int j = l-1; j < r; j++) {
            if (arr[j] == x) counter++;
        }
        cout << counter << endl;
        
    }
    
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

