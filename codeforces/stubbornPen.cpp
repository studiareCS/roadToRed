#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        bool red = false;
        int res = 0;
        for(char c: s){
            red = !red;
            if(c == 'R'){
                if(red == false){
                    res++;
                    red = true;
                }
            }else{
                if(red == true){
                    res++;
                    red = false;
                }
            }
        }
        cout << res << endl;
    }
	return 0;
}
