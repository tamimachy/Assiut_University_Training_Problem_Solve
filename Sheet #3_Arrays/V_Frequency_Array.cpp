#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n,m,i;
    cin >> n >> m;
    int a[n],fre[m+1];
    for(i=1;i<=m;i++){
        fre[i]=0;
    }
    for(i=0;i<n;i++){
        cin >> a[i];
        fre[a[i]]++;
    }
    for(i=1;i<=m;i++){
        cout << fre[i] << endl;
    }

    return 0;
}
