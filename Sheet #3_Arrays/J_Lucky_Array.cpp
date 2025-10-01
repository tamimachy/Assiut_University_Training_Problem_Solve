#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, i,j;
    cin >> n;
    int A[n];
    for(i=0;i<n;i++)
        cin>>A[i];
    sort(A,A+n);
    int counter = 0;
    for(i=0; i<n; i++){
        if(A[i]==A[0]){
            counter++;
        }
        else
            break;
    }
    if(counter%2){
        cout << "Lucky"<<endl;
    }else{
        cout << "Unlucky" << endl;
    }

    return 0;
}
