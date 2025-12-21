#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
   #endif
}

struct element {
   string a, b, c, d;
};

void solve() {
   int n;
   cin >> n;

   element arr[n];
   for (int i = 0; i < n; i++) {
      cin >> arr[i].a >> arr[i].b >> arr[i].c >> arr[i].d;
   }   

   bool flag = false;
   for (int i = 1; i < n; i++) {
      if (arr[0].a != arr[i].a || arr[0].b != arr[i].b || arr[0].c != arr[i].c || arr[0].d != arr[i].d) {
         flag = true;
         break;
      }
   }

   if (flag) {
      cout << "you were right" << endl;
   }
   else {
      cout << "Empedocles was right" << endl;
   }

}

int main() {

   Fast_IO();
   solve();
   
   return 0;
} 