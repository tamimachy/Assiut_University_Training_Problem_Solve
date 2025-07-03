#include <iostream>
using namespace std;
int main() {
    int N, i, j=0;
    cin >> N;
    for(i=1; i<=N; i++)
    {
     if(i%2 == 0)
         cout << i << endl;
    j++;
    }
    if(j==1){
        cout << -1;
    }
    return 0;
}
