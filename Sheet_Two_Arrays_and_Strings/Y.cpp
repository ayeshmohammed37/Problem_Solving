#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    string s;
    cin >> s;

    int size = s.size();
    if (size == 1) {
        cout << "YES";
        return;
    }

    int cnt = 0;
    for (int i = 0, j = size-1; i < j; i++, j--) {
        if (s[i] != s[j]) 
            cnt++;
    } 
    if (cnt == 0) cnt ++;
    if (cnt == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 