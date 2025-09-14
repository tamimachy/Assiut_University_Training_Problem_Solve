#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i, n, next_num, t1=0, t2=1;
    cin >> n;
    if(n==1){
        cout<< t1 <<" ";
    }else{
        cout << t1 << " " << t2 << " ";
        for(i=0;i<n-2;i++){
            next_num = t1+t2;
            cout << next_num << " ";
            t1 = t2;
            t2 = next_num;

        }
    }
    return 0;
}
// Easy Fibonacci
