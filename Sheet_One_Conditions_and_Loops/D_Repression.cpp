#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int sum1 = a + b;
    int sum2 = a + c;
    int sum3 = b + c;

    // if (sum1 > sum2 && sum1 > sum3) 
    //     cout << sum1 << endl;
    // else if (sum2 > sum1 && sum2 > sum3)
    //     cout << sum2 << endl;
    // else 
    //     cout << sum3 << endl;
    int maxSum = max({sum1, sum2, sum3});
    cout << maxSum << endl;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

