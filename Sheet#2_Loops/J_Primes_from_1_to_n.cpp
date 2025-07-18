#include <iostream>
using namespace std;
int main() {
    int n, i, j, c;
    cin >> n;
    for(i=1; i<=n; i++){
        c = 0;
        for(j=2; j<=i/2; j++){
            if(i%j == 0){
                c++;
                break;
            }
        }
        if(c==0 && i!=1){
            cout << i <<" ";
        }
    }
    return 0;
}
