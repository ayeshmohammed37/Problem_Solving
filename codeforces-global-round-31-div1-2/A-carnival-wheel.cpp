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

   int t; cin >> t;
   while (t--) {
      int l, a, b; cin >> l >> a >> b;
      
      int spins[l]; 
      for (int i = 0; i < l; i++) {
         spins[i] = (a + b*i) % l;
      }
      cout << *max_element(spins, spins + l) << endl;
   }
}
