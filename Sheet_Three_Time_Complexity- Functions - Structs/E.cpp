#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

struct pt {
   int x, y;
};

bool cmp(pt p1, pt p2) {
   return p1.y > p2.y;
}

void solve() {
   int n;
   cin >> n;

   pt arr[n];
   for (int i = 0; i < n; i++) {
      cin >> arr[i].x >> arr[i].y;
   }

   sort(arr, arr+n, cmp);

   for (int i = 0; i < n; i++) {
      cout << arr[i].x << " " << arr[i].y << endl;
   }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 