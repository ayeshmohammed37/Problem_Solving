#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

struct star {
   int x, y, z;
};

void solve() {
   int n;
   cin >> n;
   star arr[n];

  
   for (int i = 0; i < n; i++) {
      cin >> arr[i].x >> arr[i].y >> arr[i].z;
   }

   for (int i = 0; i < n; i++) {
      int x, y , z;
      x = y = z = 0;
      for (int j = 0; j < n; j++) {
         if (j != i) {
            if (arr[i].x == arr[j].x) 
               x++;
            if (arr[i].y == arr[j].y) 
               y++;
            if (arr[i].z == arr[j].z) 
               z++;
         }
      }
      cout << x << " " << y << " " << z << endl;
   }

}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 