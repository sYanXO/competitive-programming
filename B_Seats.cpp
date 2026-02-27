#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int ans=0;
    for(char c:s){
        if(c=='1')ans++;
    }
    int i;
    for(i=0;i<n;){
        if(s[i]=='1'){
            i++;
            continue;
        }
    

    int j=i;

    while(j<n && s[j] =='0')j++;

    int len = j-i;

    bool left = (i>0 && s[i-1]=='1');

    bool right = (i<n && s[j] == '1');

    if(right && left){
        ans+=len/3;
    }

    else if(!left && !right){
        ans+=(len+2)/3;
    }
    else{
        ans+=(len+1)/3;
    }
    i=j;
}

    cout<<ans<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--){solve();}
}