#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    int t; cin >> t;
    while(t--){
        long long int y, x; cin >> y >> x;
        
        if(y > x){
            if(y % 2 == 0)
                cout << y*y - (x-1) << endl;
            else
                cout << (y-1)*(y-1) + x << endl;
        }else{
            if(x % 2 == 0)
                cout << (x-1)*(x-1) + y << endl;
            else
                cout << x*x - (y-1) << endl;
            
        }
    }

    return 0;
}
