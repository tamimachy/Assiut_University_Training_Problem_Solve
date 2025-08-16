#include <iostream>
using namespace std;
int main() {
    while(true){
     int M, N;
     cin >> M >> N;
     if(M<=0 || N<=0){
        break;
     }
     int sum = 0;
     for(int i = min(M,N); i<=max(M,N); i++)
     {
         cout << i << " ";
         sum = sum + i;
     }
     cout << "sum =" << sum << endl;
    }
    return 0;
}
