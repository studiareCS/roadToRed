#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t; cin >> t;
    while(t--){
        vector<int> l(3);
        cin >> l[0] >> l[1] >> l[2];
        sort(l.begin(), l.end());
        
        l[0]++; l[2]--;
        
        if(l[0] == l[1] && l[1] == l[2] && l[0] == l[2]) cout << "YES\n";
        else cout << "NO\n";
    }
	return 0;
}
