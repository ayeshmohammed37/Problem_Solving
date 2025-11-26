#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int arr[n];
        int freq[101] = {0};
        for (int i = 0; i < n; i++)  {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        for (int i = 0; i < n; i++) {
            if (freq[arr[i]] == 1) {
                cout << i+1 << endl;
                break;
            }
        }
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 