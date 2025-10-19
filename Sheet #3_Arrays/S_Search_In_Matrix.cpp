#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n,m,i, j;
    cin >> n >> m;
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            cin >> arr[i][j];
    }
    int s, flag = 0;
    cin >> s;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[i][j]==s){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0){
        cout<<"will take number"<<endl;
    }else{
        cout<<"will not take number"<<endl;
    }
    return 0;
}
