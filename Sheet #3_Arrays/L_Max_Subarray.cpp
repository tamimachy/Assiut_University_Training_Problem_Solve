#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
int main() {
    int t, n,i,j,k,l,m, maxi;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> n;
        int A[n];
        for(j=0; j<n; j++){
            cin >> A[j];
        }
        for(k=0;k<n;k++){
            cout << A[k] << " ";
            m = A[k];
            for(l=k+1;l<n;l++){
                m=max(m,A[l]);
                cout << m << " ";
            }
            cout << "\n";
        }
        cout << endl;
    }
    return 0;
}
