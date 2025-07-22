#include <iostream>
using namespace std;
int main() {
    int A,B, i, G;
    cin >> A >> B;
    for(i=1; i<=A && i <=B; i++){
        if(A%i == 0 &&  B%i == 0){
              G=i;
        }
    }
    cout << G;
    return 0;
}
