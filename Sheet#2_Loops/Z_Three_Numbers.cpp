#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int s, k, i, j, c=0;
    cin >> k >> s;
    for(i=0; i<=k; i++){
        for(j=0; j<=k; j++){
            if(s-i-j>=0 && s-i-j<=k){
                c++;
            }
        }
    }
    cout << c;
    return 0;
}

