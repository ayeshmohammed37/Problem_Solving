#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    cout << fixed << setprecision(1);

    double a, b, c, avg;
    cin >> a >> b >> c;
    avg = ((a*2.0) + (b*3.0) + (c*5.0)) / (2.0 + 3.0 + 5.0);
    cout << "MEDIA = " << avg << endl;


}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

