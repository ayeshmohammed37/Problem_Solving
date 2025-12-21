#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    
    long long l, r;
    if (r1 < l2 || r2 < l1) {
        cout << "-1" << endl;
    }
    else {
        l = (l1 >= l2)? l1 : l2;
        r = (r1 <= r2)? r1 : r2;
        cout << l << " " << r << endl;
    }

}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

