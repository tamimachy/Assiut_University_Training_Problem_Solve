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
    bool flag;
    for(i=0;i<m;i++){
        flag = false;
       for(j=0;j<n;j++){
            if(a2[i]==a1[j]){
                flag = true;
                break;
                cout << a2[i]<<"=" <<a1[j] << endl;
            }else{
                flag = false;
            }
        }
    }
    if(!flag){
        cout<<"NO"<<endl;
    }else{
        cout << "YES" << endl;
    }

    return 0;
}
