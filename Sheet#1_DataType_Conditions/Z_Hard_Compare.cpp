#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    double A, B, C, D;
    cin >> A >> B >> C >> D;
    if(B*log(A)>D*log(C)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
