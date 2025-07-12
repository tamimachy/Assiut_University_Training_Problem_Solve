#include <iostream>
using namespace std;
int main() {
    int n, i, a, j;
    long long sum;
    cin >> n;
    for(i=1; i<=n; i++){
        sum = 1;
        cin >> a;
        for(j=1; j<=a; j++){
            sum *= j;
        }
       cout << sum << endl;
    }
    return 0;
}
