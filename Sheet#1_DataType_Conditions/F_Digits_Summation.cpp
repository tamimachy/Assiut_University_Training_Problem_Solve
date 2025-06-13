#include <iostream>
using namespace std;
int main() {
    long long N, M;
    cin >> N >> M;
    int sum = (N%10)+(M%10);
    cout << sum << endl;
    return 0;
}