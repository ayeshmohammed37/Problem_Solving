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
   int freq[100'000 + 1] = {0};
   
   while (n--) {
      int l, r; cin >> l >> r;
      freq[l]++;
      freq[r+1]--;
   }

   for (int i{1}; i <= 100'000; i++) {
      freq[i] += freq[i-1];
   }

   cout << *max_element(freq, freq+100'000) <<  endl;
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