#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'
 int f(int index,vector<int>&arr,int sum1,int sum2,int N){
    if(index==N){
        return abs(sum1-sum2);
    }
    int choose=f(index+1,arr,sum1+arr[index],sum2,N);
    int notchoose=f(index+1,arr,sum1,sum2+arr[index],N);
      return min(choose,notchoose);
 }


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int >arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=f(0,arr,0,0,n);
        cout<<ans<<endl;
    

}