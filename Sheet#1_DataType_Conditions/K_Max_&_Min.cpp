#include <iostream>
using namespace std;
int main(){
    int a, b, c, ma, mi;
    cin >> a >> b >> c;
    if(a>=b && a>=c){
        ma = a;
        if(b>c){
            mi = c;
        }
        else{
            mi = b;
        }
    }
    else if(b>=a && b>=c){
        ma = b;
        if(a>c){
            mi = c;
        }
        else{
            mi = a;
        }
    }
    else if(c>=a && c>=b){
        ma = c;
        if(a>b){
            mi = b;
        }
        else{
            mi = a;
        }
    }
    cout << mi << " " << ma;
    return 0;
}
