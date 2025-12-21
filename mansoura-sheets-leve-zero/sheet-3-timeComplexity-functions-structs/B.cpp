#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

string func(int a, string s1, string s2) {
   if (a == 1) {
      return s1 + s2;
   }
   return s2 + s1;
}

void solve() {
    // f(1,f(1,f(0,s1,s2)+s1,s2),s1+f(0,s1+s2,f(1,s2,s1)))
    string s1, s2;
    cin >> s1 >> s2;

    string ans = func(1,func(1,func(0,s1,s2)+s1,s2),s1+func(0,s1+s2,func(1,s2,s1)));
    cout << ans;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 