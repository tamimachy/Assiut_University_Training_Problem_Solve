#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n,m,i, j;
    cin >> n;
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cin >> arr[i][j];
    }
    int s1=0,s2=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i == j){
                s1 = s1 + arr[i][j];
            }
        }
        for(j=n-1;j>=0;j--){
            if(i+j == n-1){
                s2 = s2 + arr[i][j];
            }
        }
    }
    int result = s1-s2;
    cout << abs(result) << endl;
    return 0;
}
