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

struct cup {
   ull v, l;
   double vl;
};

bool cmp(cup a, cup b) {
   return a.vl > b.vl;
}

void solve() {
   ull N, L;
   cin >> N >> L;
   
   cup arr[N];
   for (ull i = 0; i < N; i++) {
      cin >> arr[i].v >> arr[i].l;
      arr[i].vl = static_cast<double>(arr[i].v) / arr[i].l;
   }

   sort(arr, arr + N, cmp);

   ull tankSize = 0;
   double tankValue = 0;

   for (ull i = 0; i < N; i++) {
      if (L - tankSize > 0) {
         if (L - tankSize > arr[i].l) {
            tankSize += arr[i].l;
            tankValue += arr[i].v;
         }
         else {
            ull size = L -tankSize;
            tankSize += size;
            tankValue += static_cast<double>(arr[i].v) * size / arr[i].l;
         }
      }
      else {
         break;
      }
   }

   cout << tankValue << endl;

}

int main() {

   Fast_IO();
   solve();
   
   return 0;
}