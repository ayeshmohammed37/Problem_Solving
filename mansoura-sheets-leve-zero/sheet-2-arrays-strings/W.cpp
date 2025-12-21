#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

// abb 
// zba
// bef
// cdu
// ooo
// zzz

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        
        int words[n]; 
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            int sum = 0;
            for (int j = 0; j < m; j++) {
                sum += s[j];
            }
            words[i] = sum;
        }

        int size = n * (n-1) / 2;
        int diff[size] = {0};
        for (int i = 0, k = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                diff[k++] = abs(words[i] - words[j]);
            }
        }
        sort(diff, diff + size);
        cout << diff[0] << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 