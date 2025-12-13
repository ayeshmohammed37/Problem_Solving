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

   vector<ll> a(n);

   int maxsub = 0;
   int l = 1;
   for (int i = 0; i < n; i++) { 
      cin >> a[i];
      if (i != 0 && a[i] >= a[i-1]) {
         l++;
      }
      else {
         maxsub = max(l, maxsub);
         l = 1;
      }
   }
   maxsub = max(l, maxsub);
   cout << maxsub;
}
