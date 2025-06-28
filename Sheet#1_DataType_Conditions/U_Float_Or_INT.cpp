#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin >> n;
    int INT = n;
    double res = n-INT;
    if(res >0){
        cout << "float " <<INT << " " << res << endl;
    } else{
        cout << "int " << INT << endl;
    }
    return 0;
}
