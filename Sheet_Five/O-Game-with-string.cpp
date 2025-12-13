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
   int turns = 0;
   for (int i = 0; i < s.length(); i++) {
      if (!st.empty() && s[i] == st.top()) {
         turns++;
         st.pop();
      }
      else {
         st.push(s[i]);
      }
   }
   
   if (turns % 2 == 0) {
      cout << "No\n";
   }
   else {
      cout << "Yes\n";
   }
}
