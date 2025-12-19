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

   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      string s = "";
      for (int i = 0; i < n; i++) {
         string str; cin >> str;
         if (s.empty()) {
            s = str;
         }
         else if (s[0] < str[0]) {
            s = s + str;
         }
         else if (s[0] > str[0]) {
            s = str + s;
         }
         else {
            int l = min(s.length(), str.length());
            bool flag = false;
            for (int j = 0; j < l; j++) {
               if (str[i] == s[i]) {
                  continue;
               }
               else if (str[j] < s[i]) {
                  flag = true;
                  break;
               }
               else {
                  break;
               }
            }
            if (flag) {
               s = str + s;
            }
            else {
               s = s + str;
            }
         }
      }
      cout << s << endl;
   }
}
