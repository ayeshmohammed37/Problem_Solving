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
   int t; cin >> t;

   queue<int> q;

   while (t--) {
      int id, n; cin >> id >> n;

      if (id == 1) {
         q.push(n);
      }
      else {
         if (q.empty()) {
            cout << "no\n";
         }
         else {
            if (n == q.front()) {
               cout << "yes\n";
               q.pop();
            }
            else {
               cout << "no\n";
               q.pop();
            }
         }
      }
   }
}

int main() {

   Fast_IO();
   solve();   
   
   return 0;
}