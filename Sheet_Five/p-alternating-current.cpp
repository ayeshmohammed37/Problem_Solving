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

   
   string s; cin >> s;

   stack<char> st;
   for (int i = 0; i < s.length(); i++) {
      if (st.empty()) {
         st.push(s[i]);
      }
      else if (s[i] == st.top()) {
         st.pop();
      }
      else {
         st.push(s[i]);
      }
   }
   if (st.empty()) {
      cout << "Yes";
   }
   else {
      cout << "No";
   }
}
