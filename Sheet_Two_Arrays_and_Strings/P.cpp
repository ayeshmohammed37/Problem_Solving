#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

long long fib(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    long long a = 0, b = 1;

    for (int i = 3; i <= n; i++) {
        long long temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}

void solve() {
    
    int n;
    cin >> n;
    cout << fib(n) << endl;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 