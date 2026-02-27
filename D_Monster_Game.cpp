#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n; // editorial :(

    vector<long long> a(n),b(n);

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a.begin(),a.end());

    vector<long long> pfixsumB(n+1,0);
    for(int i=0;i<n;i++){
        pfixsumB[i+1] = pfixsumB[i]+b[i];
    }

   long long ans = 0;
   for(int i=0;i<n;i++){
    long long x=a[i]; //cutoff
    long long cnt = n-i;

    int k = int(upper_bound(pfixsumB.begin(),pfixsumB.end(),cnt) - pfixsumB.begin() - 1);
     ans =  max(ans, x*1LL*k);
}

cout<<ans<<"\n";

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}