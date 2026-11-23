#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    int n; cin >> n;
    int a[n];
    for(int i=0; i < n; i++){
        cin >>  a[i];
    }

    long long int res = 0;
    for(int i=1; i<n; i++){
        if(a[i-1] > a[i]){
            res += (a[i-1]-a[i]);
            a[i] += (a[i-1]-a[i]);
        }
    }

    cout << res << endl;
	return 0;
}
