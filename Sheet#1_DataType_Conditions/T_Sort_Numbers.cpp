#include <bits/stdc++.h>
using namespace std;
int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int arr[3];
    arr[0] = A;
    arr[1] = B;
    arr[2] = C;
    sort(arr, arr+3);
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;

    cout << endl;

    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    return 0;
}
