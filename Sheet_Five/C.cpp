#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int

void Fast_IO(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
   #endif
}

void solve() {
   deque<ll> dq;

   int q; cin >> q;
   while (q--) {
      string s; cin >> s;
      if (s == "push_back") {
         ll x; cin >> x;
         dq.push_back(x);
      } else if (s == "push_front") {
         ll x; cin >> x;
         dq.push_front(x);
      }
      else if (s == "pop_front") {
         dq.pop_front();
      }
      else if (s == "pop_back") {
         dq.pop_back();
      }
      else if (s == "front") {
         cout << dq.front() << "\n";
      }
      else if (s == "back") {
         cout << dq.back() << "\n";
      }
      else {
         int i; cin >> i;
         cout << dq[i-1] << "\n";
      }
   }
}

int main() {

   Fast_IO();
   int t{1};
   // cin >> t;
   while (t--) {
      solve();
   }
   
   return 0;
}