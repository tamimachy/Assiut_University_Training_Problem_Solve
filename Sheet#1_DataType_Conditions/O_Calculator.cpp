#include <iostream>
using namespace std;
int main(){
    long long A, B, re;
    char o;
    cin >> A >> o >> B;
    if(o=='+'){
        re = A+B;
        cout << re;
    }else if(o=='-'){
        re = A-B;
        cout << re;
    }else if(o=='*'){
        re = A*B;
        cout << re;
    }
    else if(o=='/'){
        re = A/B;
        cout << re;
    }
    return 0;
}
