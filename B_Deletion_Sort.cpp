#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool is_sorted(vector<long long>& x){
    for(int i=0;i<x.size()-1;i++){
        if(x[i] >  x[i+1])return false;
    }
    return true;
}
void solve() {
    
    int n;cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 

    if(is_sorted(a)){
        // if arr is sorted, then ans = number of elements cuz  all emennts stay
        cout<<n<<endl; 
    }else{
        // a single element arr is always soretd 
        cout<<1<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}