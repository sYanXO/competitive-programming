#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int total=0;
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
    }
    set<int> winners;
    for(int i=0;i<n;i++){
        vector<int> t = a;
        int dishesleft = total;
        int currplayer = i;
        int winner=-1;

        while(dishesleft>0){
            if(t[currplayer] > 0){
                t[currplayer]--;
                dishesleft--;

                if(dishesleft==0){
                    winner = currplayer+1;
                    break;
                }
            }

            currplayer = (currplayer+1)%n;
        }
        winners.insert(winner);
    }

    cout<<winners.size()<<endl;

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