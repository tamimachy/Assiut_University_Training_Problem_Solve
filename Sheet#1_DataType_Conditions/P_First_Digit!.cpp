
#include <iostream>
using namespace std;
int main(){
    long long X;
    cin >> X;
    int firstDigit = X / 1000;
    if(firstDigit%2 == 0){
        cout << "EVEN";
    }else{
        cout << "ODD";
    }
    return 0;
}
