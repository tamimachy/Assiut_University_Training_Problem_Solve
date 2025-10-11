#include <iostream>
#include<string>
using namespace std;
int main(){
    int n;
    long long n1=0, n2=1, next_fib;
    cin >> n;
    if(n==1){
        next_fib = n1;
    }else{
        next_fib = n2;
        for(int i =0;i<n-2;i++){
            next_fib = n1+n2;
            n1=n2;
            n2=next_fib;
        }
    }
    cout << next_fib << endl;
    return 0;
}
