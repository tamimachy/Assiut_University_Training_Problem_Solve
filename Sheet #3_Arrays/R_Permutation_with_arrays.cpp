#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n, i;
    cin >> n;
    int a1[n], a2[n];
    for(i=0;i<n;i++){
        cin >> a1[i];
    }
    for(i=0;i<n;i++){
        cin >> a2[i];
    }
    sort(a1,a1+n);
    sort(a2,a2+n);
    int flag = 0;
    for(i=0;i<n;i++){
        if(a1[i]!=a2[i])
            flag++;
    }
    if(flag == 0){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}
