#include <iostream>
using namespace std;
int main() {
    int a, i,j,k, temp=0;
    cin >> a;
    for(i=1;i<=4*a;i++){
        if(i%4==0){
            cout<< "PUM\n";
        }else{
            cout << i << " ";
        }
    }
    return 0;
}
