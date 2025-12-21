#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

void Fast_IO(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
   #endif
}

int main() {

   Fast_IO();

   priority_queue<ll> nums;
   int q; cin >> q;
   string s;
   ll x;
   while (q--) {
      cin >> s;
      if (s == "push") {
         cin >> x;
         nums.push(x);
      }
      else if (s == "top" && !nums.empty()) {
         cout << nums.top() << endl;
      }
      else if (s == "pop" && !nums.empty()) {
         nums.pop();
      }
      else {
         cout << "IT IS JUST EMPTY" << endl;
      }
   }

}