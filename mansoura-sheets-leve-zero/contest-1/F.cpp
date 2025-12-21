#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int xr, yr, xw, yw;
    long double dr, dw;

    cin >> xr >> yr >> xw >> yw;

    // dr = sqrt((int)(pow(xr,2) + pow(yr,2)));
    // dw = sqrt((int)(pow(xw,2) + pow(yw,2)));
    dr = xr*xr + yr*yr;
    dw = xw*xw + yw*yw;


    if (dr > dw) {
        cout << "Wil" << endl;
    }
    else if (dr < dw) {
        cout << "Russo" << endl;
    }
    else {
        cout << "Empate" << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

