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

    // int ans;
    // string multiple;
    // if (s.size() > 1) {
    //     ans = (s[s.size() -1] -'0') + ((s[s.size() -2] - '0') * 10);
    // }
    // else {
    //     ans = s[0] -'0';
    // }

    // multiple = (ans % 3 == 0)? "YES" : "NO";
    // cout << multiple << endl;

    long long sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i] - '0';
    }

    cout << ((sum % 3 == 0)? "YES" : "NO") << endl;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 