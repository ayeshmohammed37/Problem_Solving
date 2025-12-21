#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

long long func(long long x) {
   return (2 * x) + 3;
}

void solve() {
    long long x;
    cin >> x;

    long long result =  func(func(func(x))) + 2 * func(x * func(x));
   
    cout << result << endl;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 