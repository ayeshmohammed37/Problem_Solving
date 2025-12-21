#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    long long n, k; cin >> n >> k;
    long long arr[n];

    for (long long i = 0; i < k; i++) {
        cin >> arr[i];
    }
    for (long long j = n-1; j >= k; j--) {
        cin >> arr[j];
    }

    for (long long i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 