#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;

    long long temp=n;
    long long res=1;

    for(int i=2;i*i<=n;i++){
        if(temp%i==0)res*=i;

        while(temp%i==0)temp=temp/i;
    }

    if(temp>=1){
        res*=temp;
    }

    cout<<res<<"\n";
}
int main(){
    int t;cin>>t;

    while(t--){
        solve();
    }
}