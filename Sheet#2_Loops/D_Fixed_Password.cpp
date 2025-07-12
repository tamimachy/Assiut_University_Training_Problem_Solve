#include <iostream>
using namespace std;
int main() {
    int N;
    while(1){
        cin >> N;
        if(N==1999){
            cout << "Correct\n";
            break;
        }
        else{
            cout << "Wrong\n";
        }
    }
    return 0;
}
