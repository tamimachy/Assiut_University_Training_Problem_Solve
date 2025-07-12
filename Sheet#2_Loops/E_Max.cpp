#include <iostream>
using namespace std;
int main() {
    int n, i, a, max_num = 0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a;
        if(a>max_num){
            max_num = a;
        }
    }
    cout << max_num;
    return 0;
}
