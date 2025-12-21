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

   map<string, int> m;
   int n; cin >> n;
   string s;
   while (n--) {
      cin >> s;
      if (m[s] == 0) {
         cout << "OK" << endl;
         m[s]++;
      }
      else {
         cout << s << m[s]++ << endl;
      }

   }

}