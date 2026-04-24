#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n,m,x,y,i,j;
    cin >> n >> m;
    char a[n][m];
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    cin>>x>>y;
    if(a[x][y-1] !='.' && a[x][y+1] !='.'&& a[x-1][y] !='.'&& a[x+1][y] !='.'&& a[x-1][y-1] !='.'&& a[x-1][y+1] !='.'&& a[x+1][y+1] !='.'&& a[x+1][y-1] !='.'){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}
