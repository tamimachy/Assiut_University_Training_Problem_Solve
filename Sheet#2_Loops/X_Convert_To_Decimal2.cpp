#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,a, i, c, result;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a;
        c = 0;
        while(a>0){
            c=c+a%2;
            a=a/2;
        }
        result = (pow(2,c))-1;
        cout<< result << endl;
    }

    return 0;
}
