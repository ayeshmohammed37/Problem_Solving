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

    sort(arr, arr + n);
    for (int i = 0; i < n/2; i++) {
        cout << arr[i] << " ";
    }
    for (int i = (n/2)-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = n-1; i >= n/2; i--) {
        cout << arr[i] << " ";
    }
    for (int i = (n/2); i < n; i++) {
        cout << arr[i] << " ";
    }

}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 