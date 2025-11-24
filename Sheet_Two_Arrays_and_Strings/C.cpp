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

    int counter = 0;
    int res[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] <= 10) {
            res[counter++] = i;
        }
    }

    for (int i = 0; i < counter; i++) {
        cout << "A[" << res[i] << "]" << " = " << arr[res[i]] << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

