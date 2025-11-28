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
      string s;
      cin >> s;
      int a,b;
      a = b = 0;
      for (int i = 0; i < 5; i++) {
         if (s[i] == 'A') a++;
         else b++;
      }
      cout << ((a > b)? "A" : "B") << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 