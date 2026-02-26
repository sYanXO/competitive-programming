#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,m,d;

    cin>>n>>m>>d;

    long long maxtowerheight =(d/m)+1;
    long long ans = (n + maxtowerheight -1)/maxtowerheight;
    
    cout<<ans<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}