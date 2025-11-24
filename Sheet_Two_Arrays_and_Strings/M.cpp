#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int freq[26] = {0};

    for (int i = 0; i < n; i++) {
        char c = tolower(s[i]);
        freq[c -'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] == 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 