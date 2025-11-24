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
    int arr[n][n];

    int primary = 0;
    int secondary = 0;
    // int index = n-1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];

            if (i == j) primary += arr[i][j];
            // if (j == index) {
            //     secondary += arr[i][j];
            //     index--;
            // }
            if (i+j == n-1) secondary += arr[i][j];
        }
    }
    cout << abs(primary - secondary) << endl;

}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

