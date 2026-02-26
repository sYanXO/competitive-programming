#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;

    long long sum = 0;
    for(char c:s){
        sum+= c - '0';
    }

    if(sum<=9){
        cout<<0<<"\n";
        return;
    }

    long long need = sum-9; // minimum needed to be removed or subtracted thereby replacing
    vector<long long> reductions;
    for(int i=0;i<s.size();i++){
        int d = s[i] - '0';
        if(i==0){
            reductions.push_back(d-1);
        }else{
            reductions.push_back(d);
        }
    }
    sort(reductions.rbegin(),reductions.rend());

    long long curr = 0;
    long long cnt = 0;

    for(long long x: reductions){
        if(curr >= need)break;
        else{
            curr+=x;
            cnt++;
        }
    }
    cout<<cnt<<"\n";

}   
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}