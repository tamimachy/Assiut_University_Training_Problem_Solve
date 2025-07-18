#include <iostream>
using namespace std;
int main() {
    int n, re = 0;
    cin >> n;
    int temp = n;
    while(temp>0){
        re = re * 10 + temp%10;
        cout << re << " ";
        temp = temp/10;
    }
    cout << re << "\n";
    if(re == n){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
