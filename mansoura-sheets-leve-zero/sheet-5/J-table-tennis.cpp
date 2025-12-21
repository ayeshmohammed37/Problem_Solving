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
   int n;
   ull k;
   cin >> n >> k;

   deque<int> dq;
   int player;
   for (int i{0}; i < n; i++) {
      cin >> player;
      dq.push_back(player);
   }
   if (k >= n) {
      cout << *max_element(dq.begin(), dq.end());
      return;
   }

   ull cnt{0};
   int mx{dq.front()}; dq.pop_front(); 
   while (cnt < k) {
      if (mx > dq.front()) {
         cnt++;
         int back{dq.front()}; dq.pop_front();  
         dq.push_back(back);
      }
      else {
         cnt = 1;
         dq.push_back(mx);
         mx = dq.front(); 
         dq.pop_front();
      }
   }
   cout << mx;

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