#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int t, x, rating;

    cin >> t;
    
    while (t--) {
        cin >> rating;
        if (rating >= 1900)
            x = 1;
        else if (rating >= 1600 && rating <= 1899)
            x = 2;
        else if (rating >= 1400 && rating <= 1599)
            x = 3;
        else 
            x = 4;
        cout << "Division " << x << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

