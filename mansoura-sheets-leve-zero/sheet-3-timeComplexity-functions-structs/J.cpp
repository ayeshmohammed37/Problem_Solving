#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
   #endif
}


struct dragon {
   int x, y;
};

bool cmp (dragon d1, dragon d2) {
   return d1.x < d2.x;
}

void solve() {
   long long s, n;
   cin >> s >> n;

   dragon arr[n];
   for (int i = 0; i < n; i++) 
      cin >> arr[i].x >> arr[i].y;
   
   sort(arr, arr+n, cmp);
   
   for (int i = 0; i < n; i++) {
      if (s > arr[i].x) {
         s += arr[i].y;
      }
      else {
         cout << "NO" << endl;
         return;
      }
   }
   cout << "YES" << endl;
}

int main() {

   Fast_IO();
   solve();
   
   return 0;
} 