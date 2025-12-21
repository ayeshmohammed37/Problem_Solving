#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int n, m; cin >> n >> m;
    int arr[n][m];

    int freq[100000] = {};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            freq[arr[i][j]]++;
        }   
    }

    int x; cin >> x;
    if (freq[x] > 0) cout << "YES";
    else cout << "NO";
    
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

