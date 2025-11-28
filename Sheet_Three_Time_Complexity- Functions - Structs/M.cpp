#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
   #endif
}


struct rec {
   long long i;
   long long a;
};

bool cmp(rec a, rec b) {
   return a.a < b.a;
}

void solve() {
   long long n;
   cin >> n;

   rec arr[n];
   for (long long i = 0; i < n; i++) {
      long long x[4];
      long long y[4];

      for (long long j = 0; j < 4; j++) {
         cin >> x[j] >> y[j];
      }

      long long l = *max_element(x, x+4) - *min_element(x, x+4);
      long long w = *max_element(y, y+4) - *min_element(y, y+4);
      long long a = l * w;
      arr[i] = {i+1, a};
   }

   sort(arr, arr+n, cmp);

   for (long long i = 0; i < n; i++) {
      cout << arr[i].i << " " << arr[i].a << endl;
   }
}

int main() {

   Fast_IO();
   solve();
   
   return 0;
} 