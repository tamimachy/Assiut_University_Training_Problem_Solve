#include <iostream>
#include<string>
using namespace std;
int main(){
    int n;
    long maxi=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    for(int i=0; i<n;i++){
        if(arr[i]%2==0)
            maxi++;
        else
            break;
    }
    cout << maxi << endl;
    return 0;
}
