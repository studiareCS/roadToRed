#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a[26]; for(int i = 0; i < 26; i++) a[i] = 0;
        string p, q; cin >> p >> q;
        if(n-m==3){
            for(char c: p){ a[c-97]++;}
            for(char c: q){ a[c-97]--;}
            bool flag = true;

            for(int i = 0; i < 26; i++){
                if(i == 8 || i == 23 || i == 18){
                    if(a[i]!=1){
                        flag = false;
                        break;
                    }
                }else if(a[i] != 0){
                    flag = false;
                    break;
                }
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
    
	return 0;
    
}
