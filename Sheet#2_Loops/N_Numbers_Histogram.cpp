#include <iostream>
using namespace std;

int main() {
    char S;
    int N, i, temp, j;
    cin >> S >> N;
    for(i=0; i<N; i++){
        cin >> temp;
        for(j=0; j<temp; j++){
            cout << S;
        }
        cout << endl;
    }

    return 0;
}
