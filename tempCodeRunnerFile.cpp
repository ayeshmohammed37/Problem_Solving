#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define uli unsigned long int
#define ull unsigned long long
#define uint unsigned int

void Fast_IO(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
   #endif
}

void solve() {
   stack<char> openBracket;
   stack<char> closeBracket;

   string s; cin >> s;
   for (const char& ch : s) {
      if (ch == '(') {
         openBracket.push(ch);
      }
      else {
         closeBracket.push(ch);
      }
   }
   if (openBracket.size() == closeBracket.size()) {
      cout << "Yes";
   }
   else {
      cout << "No";
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