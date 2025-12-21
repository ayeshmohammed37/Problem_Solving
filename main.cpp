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



int main() {
   Fast_IO();

   map<int, int> m;
   m[1] = 10;
   m[2] = 11;
   m[3] = 9;
   m[1]++;

   // for (auto item : m) {
   //    cout << item.first << " " << item.second << endl;
   // }
   // m.erase(1);
   m.erase(m.find(2));

   for (auto i = m.begin(); i != m.end(); i++) {
      cout << i->first << " " << i->second << endl;
   }

}