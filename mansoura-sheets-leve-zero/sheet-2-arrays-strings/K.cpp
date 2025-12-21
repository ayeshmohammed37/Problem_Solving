#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
    int n; cin >> n;
    int arr[n];

    for (int i = 0; i < n; cin >> arr[i++]) 
        ;
    
    swap(*min_element(arr, arr+n), *max_element(arr, arr+n));
    for (int i = 0; i < n; cout << arr[i++] << " ") 
        ;
    cout << endl;
    
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 