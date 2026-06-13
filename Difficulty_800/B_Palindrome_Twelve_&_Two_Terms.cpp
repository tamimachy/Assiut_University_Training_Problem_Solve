#include<bits/stdc++.h>
#include<algorithm>
#include <vector>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    // int reminder = n%12;
    if(n==10)
    {
        cout << -1 << endl;
        return;
    }
    long long A;
    long long B;
    A = n%12;
    B=(n-A);
    if(A==10){
        A+=12;
        B-=12;
    }
    cout << A << " " << B << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
