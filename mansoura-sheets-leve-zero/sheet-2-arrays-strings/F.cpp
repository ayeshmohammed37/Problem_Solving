#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int n; cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int val = *min_element(arr, arr+n);
    int pos = min_element(arr, arr+n) - arr + 1;
    cout << val << " " << pos << endl;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

