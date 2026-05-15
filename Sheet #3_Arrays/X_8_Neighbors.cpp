#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n,m,x,y,i,j;
    cin >> n >> m;
    char a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    cin>>x>>y;
    x=x-1;
    y=y-1;
    if(a[x-1][y-1]!='.' && a[x-1][y]!='.'&& a[x-1][y+1]!='.'&&
        a[x][y-1]!='.'&& a[x][y+1]!='.'&&
        a[x+1][y-1]!='.'&& a[x+1][y]!='.'&& a[x+1][y+1]!='.')
            {
                cout<<"yes";
            }else{
                cout<<"no";
            }
    return 0;
}
