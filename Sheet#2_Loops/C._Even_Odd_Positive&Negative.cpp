#include <iostream>
using namespace std;
int main() {
    int N, i, e=0, o=0, p=0, n=0;
    cin >> N;
    int arr[N];
    for(i=0; i<N; i++){
        cin >> arr[i];
    }
    for(i=0; i<N; i++){
        if(arr[i]%2==0){
            e++;
        }
        else{
            o++;
        }
        if(arr[i]>0){
            p++;
        }
        else if(arr[i]<0){
            n++;
        }
    }
    cout << "Even: "<< e << endl;
    cout << "Odd: "<< o << endl;
    cout << "Positive: "<< p << endl;
    cout << "Negative: "<< n;
    return 0;
}
