#include <iostream>
using namespace std;
int main() {
    int n,a,b,i,j, x, sum, r, t = 0;
    cin >> n >> a>>b;
    for(i=1;i<=n;i++){
        sum = 0;
        x = i;
       for(;x>0;){
            r = x%10;
            sum = sum + r;
            x = x/10;
        }
        if(sum>=a && sum <=b){
            t = t+i;
        }
    }
    cout << t;
    return 0;
}
