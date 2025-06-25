#include <iostream>
using namespace std;
int main(){
    int N, re, y, m, d;
    cin >> N;
    y = N/365;
    re = N%365;
    m = re/30;
    d = re%30;
    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" ;
    return 0;
}
