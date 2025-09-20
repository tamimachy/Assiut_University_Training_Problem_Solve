#include <iostream>
using namespace std;
int main() {
    int n, i;
    cin >> n;
    int A[n];
    for(i=1; i<=n; i++){
        cin >> A[i];
    }
    for(i=n;i>0;i--){
        cout << A[i]<<" ";
    }
    return 0;
}
