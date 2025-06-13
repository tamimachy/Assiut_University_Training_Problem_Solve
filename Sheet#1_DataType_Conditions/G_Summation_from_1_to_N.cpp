#include <iostream>
using namespace std;
int main() {
    long long N, X=0;
    cin >> N;
    // for(int i = 1; i<=N; i++){
    //     X = X+i;
    // }
    X = (N*(N+1))/2;
    cout << X;
    return 0;
}