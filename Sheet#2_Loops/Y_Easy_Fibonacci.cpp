#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i, fib, result;
    cin >> fib;
    for(i=1;i<=fib;i++){
        if(fib==1){
            cout << 0 << " ";
        }
        if(fib==2){
            cout << 1 << " ";
        }
        if(fib>2){
            result = fib(i);
            cout << 1 << " ";
        }
    }

    return 0;
}
