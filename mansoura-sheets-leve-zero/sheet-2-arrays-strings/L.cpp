#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        string st1, st2;
        cin >> st1 >> st2;

        for (int i = 0; i < n; i++) {
            if (st1[i] == 'G')
                st1[i] = 'B';
            if (st2[i] == 'G')
                st2[i] = 'B';          
        }

        if (st1 == st2) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 