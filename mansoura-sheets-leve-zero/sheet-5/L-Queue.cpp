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

   vector<ll> t(n);
   for (int i = 0; i < n; i++) cin >> t[i];
   sort(t.begin(), t.end());

   int cnt = 0;
   ll totalTime = 0;
   for (const ll& i : t) {
      if (i >= totalTime) {
         cnt++;
         totalTime += i;
      }
   }
   cout << cnt;
   
}
