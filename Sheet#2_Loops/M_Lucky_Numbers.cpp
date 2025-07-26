#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, i, t, last, countp = 0;
    cin >> a >> b;
    for(i=a; i<=b; i++){
        t = i;
        while(t){
            last = t%10;
            if(last == 4 || last == 7){
                t = t/10;
            }else{
                break;
            }
        }
        if(t == 0){
            cout << i << " ";
            countp++;
        }
    }
    if(countp==0){
        cout << -1;
    }

    return 0;
}
