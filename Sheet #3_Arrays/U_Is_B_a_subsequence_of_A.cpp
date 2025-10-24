#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n,m,i, j;
    cin >> n >> m;
    int a1[n], a2[m];
    for(i=0;i<n;i++)
        cin >> a1[i];
    for(i=0;i<m;i++)
        cin >> a2[i];
    int flag=0;
    for(i=0;i<n && flag<m;i++){
        if(a1[i]==a2[flag]){
            flag++;
        }
    }
    if(flag==m){
        cout<<"YES"<<endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
