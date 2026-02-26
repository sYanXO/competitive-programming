#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pos = -1;
    for(int i=0;i<n;i++){
        if(a[i]==n){
            pos = i;
        }
    }

    if(pos!=0){
        swap(a[0],a[pos]);
    }

    for(int x:a){
        cout<<x<<" ";
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