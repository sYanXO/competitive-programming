#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    // since alice can always sort the array at one turn by sorting idx of first one and last zero.

    // win con for bob is iff the og string is already sorted ie 0000 1111  0011

    // since  first turn is alice she loses by default


    int n;cin>>n;
    string s;
    cin>>s;

    string sorted = s;
    sort(sorted.begin(), sorted.end());

    if (s == sorted) {
        cout << "Bob\n";
        return;
    }

    vector<int> idx;
    for(int i = 0; i < n; ++i) {
        if(s[i] != sorted[i]) {
            idx.push_back(i + 1);
        }
    }

    cout << "Alice\n";
    cout << idx.size() << '\n';
    for(auto i : idx) cout << i << " ";
    cout << '\n';
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