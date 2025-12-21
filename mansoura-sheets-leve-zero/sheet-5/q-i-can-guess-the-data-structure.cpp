#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

void Fast_IO(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
   #endif
}


int main() {
   Fast_IO();

   int n; 
   while (cin >> n) {
      stack<int> st;
      queue<int> q;
      priority_queue<int> pq;
      bool stackFlag, queueFlag, pqFlag;
      stackFlag = queueFlag = pqFlag = true;
      for (int i = 0; i < n; i++) {
         int command, x; cin >> command >> x;
         if (command == 1) {
            st.push(x);
            q.push(x);
            pq.push(x);
         }
         else {
            if (!st.empty() && st.top() == x) {
               st.pop();
            }
            else {
               stackFlag = false;
            }

            if (!q.empty() && q.front() == x) {
               q.pop();
            }
            else {
               queueFlag = false;
            }

            if (!pq.empty() && pq.top() == x) {
               pq.pop();
            }
            else {
               pqFlag = false;
            }
         }
      }

      if (stackFlag + queueFlag +pqFlag == 0) {
         cout << "impossible\n";
      }
      else if (stackFlag + queueFlag +pqFlag == 2){
         cout << "not sure\n";
      }
      else if (stackFlag) {
         cout << "stack\n";
      }
      else if (queueFlag) {
         cout << "queue\n";
      }
      else {
         cout << "priority queue\n";
      }
   }
}
