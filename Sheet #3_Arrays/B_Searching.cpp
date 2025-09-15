#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i, n,x,result;
    cin >> n;
    int num[n];
    for(i=0;i<n;i++){
        cin >> num[i];
    }
    cin >> x;
    for(i=0;i<n;i++){
        if(num[i] == x){
            result = i;
            break;
        }else{
            result = -1;
        }
    }
    cout<< result << endl;
    return 0;
}
