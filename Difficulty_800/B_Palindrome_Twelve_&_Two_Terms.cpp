#include<bits/stdc++.h>
#include<algorithm>
#include <vector>
/*int palindrome(long long arr[]){
    int left = 0;
    int right = arr.size() - 1;
    while(left < right){
        if(arr[left] != arr[right]){
            return -1;
        }
        left +=1;
        right -=1;
    }
    return 1;
} */
using namespace std;
int main(){
    int t, a,b,i;
    cin >> t;
    vector<long long> n(t);
    for(i=0;i<t;i++){
        cin >> n[i];
    }
    for(i=0;i<t;i++){
        a = i+1;
        b = i%12;
        if(n[i]==a && b == 0){
            cout << a << " " << b << endl;
        }else if(n[i] == 10){
            cout << -1 << endl;
        }else if(n[i]%12 == 10){
            b = 12*(i+1);
            //a = n[i] - b;
            cout << " " << b << endl;
        }
    }
    return 0;
}
