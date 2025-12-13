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
   deque<int> dq;

   int num;
   for (int i{0}; i < n; i++) {
      cin >> num;
      if (!dq.empty()) {
         if (dq.front() > num) {
            dq.push_front(num);
         }
         else {
            dq.push_back(num);
         }
      } 
      else {
         dq.push_front(num);
      }
   }

   for (const int& i : dq) {
      cout << i << " ";
   }
   cout << endl;
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