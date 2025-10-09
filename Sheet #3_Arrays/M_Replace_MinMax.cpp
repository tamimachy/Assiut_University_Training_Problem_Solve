#include <iostream>
using namespace std;
int main() {
    int n, i;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
        cin >> arr[i];
    int min = arr[0];
    int max = arr[0];
    int min_index = 0;
    int max_index = 0;
    for(i=1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            min_index = i;
        }
        if(arr[i]>max){
            max = arr[i];
            max_index = i;
        }
    }
    arr[min_index] = max;
    arr[max_index] = min;
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
