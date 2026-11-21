#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    int k, min=10; cin >> k;
    bool flag = false;
    while(k--){
        int a; cin >> a;
        if(a < min) min = a;
        if(a == 9) flag = true;
    }

    if(flag) cout << min << endl;
    else cout << -1 << endl;
	return 0;
}
