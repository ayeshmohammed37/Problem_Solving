#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void print(int arr[], int size);

void solve() {
    
    string st; cin >> st;
    for (int i = 0; i < st.length(); i++) {
        if (i == 0) st[i] = toupper(st[i]);
        else st[i] = tolower(st[i]);
    }
    cout << st << endl;
}


int main() {

    Fast_IO();
    solve();
     
    return 0;
} 

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
