#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n, q, l, r, i;
    cin >> n >> q;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=1; i<n; i++){
        a[i]+=a[i-1];
    }
    while(q--){
        int l,r;
        cin >> l>> r;
        int sum = 0;
        if(l==1){
            sum = a[r-1];
        }else{
            sum=a[r-1]-a[l-2];
        }
        cout << sum << endl;
    }
    return 0;
}
