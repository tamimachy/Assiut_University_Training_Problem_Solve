#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i, n;
    cin >> n;
    long long num[n];
    for(i=0;i<n;i++){
        cin >> num[i];
    }
    for(i=0;i<n;i++){
        if(num[i]<0){
            cout << 2 << " ";
        }else if(num[i]>0){
            cout << 1 << " ";
        }else{
            cout << 0 << " ";
        }
    }
    return 0;
}
