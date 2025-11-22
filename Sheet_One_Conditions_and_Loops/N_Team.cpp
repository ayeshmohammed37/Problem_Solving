#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int n, p, v, t;
    int numProblems = 0;

    cin >> n;
    while (n--) {
        cin >> p >> v >> t;
        
        if (p == 1 && v == 1) 
            numProblems++;
        else if (p == 1 && t == 1)
            numProblems++;
        else if (v == 1 && t == 1)
            numProblems++;
    }

    cout << numProblems << endl;
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

