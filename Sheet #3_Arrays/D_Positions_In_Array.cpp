#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, i, p;
    cin >> n;
    long long A[n];
    for(i=0; i<n; i++){
        cin >> A[i];
    }
    for(i=0;i<n;i++){
        if(A[i]<=10){
            cout << "A["<< i <<"] = " << A[i] << endl;
        }
    }
    return 0;
}
