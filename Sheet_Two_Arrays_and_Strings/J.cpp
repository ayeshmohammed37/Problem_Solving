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

    for (int i = 0; i < n; cin >> arr[i++]) 
        ;

        bool flag = true;
    for (int i = 0, j =  n-1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            flag = false;
            break;
        }
    }

    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    // for (int i = 0; i < n; cout << arr[i++] << " ")
    //     ;

}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 