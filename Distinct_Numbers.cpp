#include <bits/stdc++.h>
 
using namespace std;
#define int long long
#define endl '\n'
 
 
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];
set<int>a;
for(int i=0;i<n;i++)
a.insert(arr[i]);
cout<<a.size()<<endl;
    return 0;
 
}