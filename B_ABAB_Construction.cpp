#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;cin>>n;
    string s;
    cin>>s;
    if(n%2==1){
        if(s[0] != 'a' && s[0] !='?'){
            cout<<"NO"<<"\n";return;
        }

        for(int i=1;i+1<n;i+=2){
            if(s[i] != '?' && s[i+1] != '?' && s[i]==s[i+1]){
                cout<<"NO"<<"\n";return;
            }
        }
    }else{
        for (int i=0;i+1<n;i+=2) {
            if (s[i] != '?' && s[i+1] != '?' && s[i] == s[i+1]) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout<<"YES"<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}