#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, i, v, p;
    cin >> n;
    int A[n];
    for(i=0; i<n; i++){
        cin >> A[i];
    }
    v = A[0];
    p = 1;
    for(i=0;i<n;i++){
        if(A[i]<v){
            v=A[i];
            p = i+1;
        }
    }
    cout << v << " " << p << endl;
    return 0;
}
