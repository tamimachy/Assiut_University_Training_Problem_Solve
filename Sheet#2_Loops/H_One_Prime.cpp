#include <iostream>
using namespace std;
int main() {
    int n, f, i;
    cin >> n;
    f = 0;
    for(i=2; i<n; i++){
        if(n%i==0){
            f=1;
        }
    }
    if(f == 1){
        cout << "NO";
    }else{
        cout << "YES";
    }

    return 0;
}
