#include <iostream>
using namespace std;
int main() {
    int a, i,j, re, temp=0;
    cin >> a;
    for(i=1;i<=a;i++){
        cin >> j;
        if(j==0){
            cout << "0";
        }
        while(j>0){
            re = j%10;
            cout << re << " ";
            j = j/10;
        }
        cout << endl;
    }
    return 0;
}
