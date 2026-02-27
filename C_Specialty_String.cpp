#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    // goal is to completely fill up the words by *'s

    // allowed to replace adjacent chars with *s

    // if each charcter is preset even numbe of times we cando it...
    
    
    // idx 1 and idx n can be taken as a pair if only *s is present in bw them
    
    
    // non even case

    int n;cin>>n;
    string s;
    cin>>s;

    if(n%2!=0){
        cout<<"NO"<<endl;
        return;
    }

    // od case

    stack<char> st;
    for(char c:s){
        if(!st.empty() && st.top()==c){
            st.pop();
        }else{
            st.push(c);
        }
    }

    if(!st.empty()){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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