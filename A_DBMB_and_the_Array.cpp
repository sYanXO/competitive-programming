#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,s,x;

    cin>>n>>s>>x;
    int sum=0;
    int a;
    for(int i= 1;i<=n;i++){
        cin>>a;
        sum+=a;
    }

    if(s>=sum && (sum-s)%x==0)cout<<"YES\n";
    else{
        cout<<"NO\n";
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}