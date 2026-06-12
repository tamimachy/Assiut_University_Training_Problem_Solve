#include<bits/stdc++.h>
#include<algorithm>
#include <vector>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    int reminder = n%12;
    if(n==10)
        cout << -1 << endl;
    long a = -1;
    if(reminder<=9)
        a = reminder;
    else if(reminder == 10)
        a = 22;
    else
        a = 11;
    cout << a << " " << n-a << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
