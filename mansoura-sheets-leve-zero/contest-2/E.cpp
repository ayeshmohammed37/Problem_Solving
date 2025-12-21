#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    string s; cin >> s;

    int y = (s.find('Y') < 50)? 1 : -1;
    int e = (s.find('e') < 50)? 1 : -1;
    int ss = (s.find('s') < 50)? 1 : -1;
    
    if ( (y+e+ss) == 3) 
        cout << "Ziad eld3eef";
    else 
        cout << "Ziad is weak";

}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 