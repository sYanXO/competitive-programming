#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;

    vector<int> a(n), b(n);

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];


    int l,r;

    
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            a[i] = max(a[i],b[i]);
        }
        else{
            a[i] = max({a[i],b[i],a[i+1]});
        }
    }

    int prefixsum[n+1];

    prefixsum[0]=0;

    for(int i=0;i<n;i++){
        prefixsum[i+1] = prefixsum[i]+a[i];
    }

    for(int i=1;i<=q;i++){
        cin>>l>>r;
        cout<<prefixsum[r] - prefixsum[l-1]<< " ";
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}