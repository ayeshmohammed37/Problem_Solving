#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int n, m;
    cin >> n >> m;

    int arr[n];
    int freq[m + 1] = {0};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int i = 1; i <= m; i++) {
        cout << freq[i] << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 