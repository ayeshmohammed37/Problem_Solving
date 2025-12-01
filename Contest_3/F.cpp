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
   int N; cin >> N;
   int k{1};
   int arr[100000] = {0};

   for (int i{1}; i <= 3*N; i++) {
      int c{10*N*N};
      if (c % i == 0 && ((c/i) - i) == 3*N) {
         arr[k++] = i;
         arr[k++] = -1 * c / i;
      }
   }
   
   cout << k << endl;
   for (int i{0}; i < k; i++) {
      cout << arr[i] << " ";
   }
}

int main() {

   Fast_IO();
   solve();
   
   return 0;
}