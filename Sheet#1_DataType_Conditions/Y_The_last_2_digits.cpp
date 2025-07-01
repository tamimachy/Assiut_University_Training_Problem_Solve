#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int A, B, C, D, R;
    cin >> A >> B >> C >> D;
    A=A%100;
    B=B%100;
    C=C%100;
    D=D%100;
    R = A*B*C*D;
    int x1 = R%10;
    int x2 = R%100/10;
    cout << x2 << x1;
    return 0;
}
