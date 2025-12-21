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

   map<ll, ll> m;

   int n; cin >> n;
   ll val;
   int cnt = 0;
   while (n--) {
      cin >> val;
      if (m[val] == 0) {
         m[val]++;
         cnt++;
      }
      else if (m[val] == 1){
         cnt--;
         m[val]++;
      }
   }
   cout << cnt;

}