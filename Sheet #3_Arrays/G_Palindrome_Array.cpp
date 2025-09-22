#include <iostream>
using namespace std;
int main() {
    int n, i,m, flag = 0;
    cin >> n;
    int A[n];
    for(i=0; i<n; i++){
        cin >> A[i];
    }
    for(i=0; i<=n/2; i++){
        if(A[i]!=A[n-1-i]){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
