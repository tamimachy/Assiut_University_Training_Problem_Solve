#include <iostream>
using namespace std;
int main() {
    int t, n, i,j, temp = 0;
    cin >> t;
    int Test[t];
    for(i=0; i<t; i++){
        cin >> Test[i];
        cin >> n;
        int A[n];
        for(i=0; i<n; i++){
            cin >> A[i];
        }
    }
    for(i=1; i<n-1; i++){
       for(j=i+1;j<n-i;j++){
        if(A[j]>A[j+1]){
          swap(A[j],A[j+1]);
        }
       }
    }
    for(i=0; i<n; i++){
        cout << A[i] << " ";
    }
    return 0;
}
