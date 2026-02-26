#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long x,y;
    cin>>x>>y;

    if(y>=0){
        if(x>=2*y && (x+y)%3==0){
            cout<<"YES"<<"\n";return;
        }
    }
    if(y<0){
        if(x>=-4*y && (x+y)%3==0){
            cout<<"YES"<<"\n";return;
        }
    }
    cout<<"NO"<<"\n";
}
int main(){
    int t;cin>>t;while(t--){
        solve();
    }
}