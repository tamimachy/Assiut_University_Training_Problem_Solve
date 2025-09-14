#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i, n;
    long long s = 0;
    cin >> n;
    long long num[n];
    for(i=0;i<n;i++){
        cin >> num[i];
        s += num[i];
    }
    cout << abs(s) << endl;
    return 0;
}
