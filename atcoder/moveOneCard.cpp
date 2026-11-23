#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    vector<int> A, B;
    int n, sumA, sumB; cin >> n;
    sumA = sumB = 0;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        sumA += a;
        A.push_back(a);
    }

    int m, M;
    bool flag = true;
    
    for(int i = 0; i < n; i++){
        int b; cin >> b;
        sumB += b;
        B.push_back(b);
        if(A[i] != b){
            if(flag){
                m = i;
                flag = false;
            }
            else M = i;
        }
    }

    if(flag){
        cout << "Yes" << endl;
        return 0;
    }
    if(sumA != sumB){
        cout << "No" << endl;
        return 0;
    }
    
    bool result = true;
    for(int i = m; i <= M-1; i++){
        if(A[i] != B[i+1]){
            result = false;
            break;
        }
    }
    if(A[M] != B[m]) result = false;
    
    if(result){
        cout << "Yes" << endl;
        return 0;
    }

    result = true;
    for(int i = m+1; i <= M; i++){
        if(A[i] != B[i-1]){
            result = false;
            break;
        }
    }

    if(A[m] != B[M]) result = false;
    if(result){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
return 0;
}
