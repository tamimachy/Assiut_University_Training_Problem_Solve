#include <iostream>
using namespace std;
int main() {
    int a, i,j,k, temp=0;
    cin >> a;
    for(i=1;i<=a;i++){
        for(j=1;j<=a-i;j++){
                cout << " ";
        }
        for(k=1; k<=2*i-1;k++){
            cout<<"*";
        }
        cout<< endl;
    }
    for(i=a;i>=1;i--){
        for(j=1;j<=a-i;j++){
                cout << " ";
        }
        for(k=1; k<=2*i-1;k++){
            cout<<"*";
        }
        cout<< endl;
    }
    return 0;
}
