#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int N, X; cin >> N >> X;
    int arr[N];
    
    // int index = -1;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        // if (arr[i] == X) index = i;
    }

    // if (index != -1) cout << index << endl;
    // else cout << "Not Found" << endl;

    for (int i = 0; i < N; i++) {
        if (arr[i] == X) {
            cout << i << endl;
            return;
        }
    }
    cout << "Not Found" << endl;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

