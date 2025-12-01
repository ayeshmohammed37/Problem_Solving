#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define uint unsigned int

using namespace std;

void Fast_IO(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
   #endif
}

void solve() {
   int t; cin >> t;

   while (t--) {
      int n; cin >> n;
      // int arr[n];

      int longestBlankSpace{0};
      int blankSpace{0};
      for (int i{0}; i < n; i++) {
         int num; cin >> num;
         if (num == 1) {
            blankSpace = 0;
         } else {
            blankSpace++;
         }
         longestBlankSpace = (blankSpace > longestBlankSpace)? blankSpace : longestBlankSpace;
      }
      cout << longestBlankSpace << endl;
   }
}

int main() {

   Fast_IO();
   solve();
   
   return 0;
}