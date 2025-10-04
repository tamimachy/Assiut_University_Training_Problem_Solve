#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int n, i,sum = 0;
    cin >> n;
    string inputLine;
    cin >> inputLine;
    for(i=0; i<n;i++){
        sum = sum + (inputLine[i]-'0');
    }
    cout << sum;
    return 0;
}
