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

   for (size_t i{0}; i < s.size(); i++) {
      if (s[i] == '{' || s[i] == '(' || s[i] == '[' || s[i] == '<') {
         st.push(s[i]);
      }
      else {
         if (!st.empty()) {
            if (s[i] == '}' && st.top() == '{') {
               st.pop();
            }
             else if (s[i] == ']' && st.top() == '[') {
               st.pop();
            }
            else if (s[i] == ')' && st.top() == '(') {
               st.pop();
            }
            else if (s[i] == '>' && st.top() == '<') {
               st.pop();
            }
            else {
               cout << "No\n";
               return;
            }
         }
      }
   }

   if (st.empty()) {
      cout << "Yes\n";
   }
   else {
      cout << "No\n";
   }
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