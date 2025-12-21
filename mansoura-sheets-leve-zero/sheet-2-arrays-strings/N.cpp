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

        string s;
        cin >> s;

        int ballons = 0;
        int freq[26] = {0};

        for (int i = 0; i < n; i++) {
            if (freq[s[i] - 'A'] == 0) {
                freq[s[i] - 'A'] += 2;
                ballons += 2;
            }
            else {
                // freq[s[i] - 'A']++;
                ballons++;
            }
        }
        cout << ballons << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 