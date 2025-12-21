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

   int n; cin >> n;
   vector<ll> v(n);
   for (int i = 0; i < n; i++) cin >> v[i];
   sort(v.begin(), v.end(), greater<ll>());
   
   ll cnt = 0;
   for (ll i = 0, sum = 0; i < n; i++) {
      sum += v[i];
      if (sum >= 0) {
         cnt++;
      }
      else {
         break;
      }
   }
   cout << cnt << endl;
}
