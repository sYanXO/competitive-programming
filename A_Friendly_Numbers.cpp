#include<bits/stdc++.h>
using namespace std;

long long digitsum(long long n){
    long long sum=0;
    while(n>0){
        sum += n%10;
        n/=10;
    }
    return sum;
}
void solve(){
    long long x;
    cin>>x;
    long long cnt = 0;
    for(long long y = x; y <= x+81 ; y++){
        if(y - digitsum(y) == x){
            cnt++;
        }
    }
    cout<<cnt<<"\n";

}

int main(){
    int t;cin>>t;while(t--){solve();}
}