#include <iostream>
using namespace std;
int main() {
    int n, i,j, temp = 0;
    cin >> n;
    int A[n];
    for(i=0; i<n; i++){
        cin >> A[i];
    }
    for(i=0; i<n-1; i++){
       for(j=0;j<n-i-1;j++){
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
