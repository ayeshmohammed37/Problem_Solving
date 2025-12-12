#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int

void Fast_IO(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
   #endif
}

void solve() {
   string s; cin >> s;

   stack<char> st;
   int regularBracketlength = 0;
   for (size_t i{0}; i < s.size(); i++) {
      if (s[i] == '(') {
         st.push(s[i]);
      }
      else {
         if (!st.empty()) {
            st.pop();
            regularBracketlength += 2;
         }
      }
   }

   cout << regularBracketlength << "\n";
}

int main() {

   Fast_IO();
   int t{1};
   // cin >> t;
   while (t--) {
      solve();
   }
   
   return 0;
}