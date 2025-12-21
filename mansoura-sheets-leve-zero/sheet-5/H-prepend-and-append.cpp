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
   int n; cin >> n;
   deque<char> dq;

   for (int i{0}; i < n; i++) {
      char ch; cin >> ch;
      dq.push_back(ch);
   }

   if (n == 1) {
      cout << n << "\n";
      return;
   }

   while ((!dq.empty()) &&  (dq.size() != 1) && (dq.front() != dq.back())) {
      dq.pop_back();
      dq.pop_front();
   }

   cout << dq.size() << endl;
}

int main() {

   Fast_IO();
   int t{1};
   cin >> t;
   while (t--) {
      solve();
   }
   
   return 0;
}