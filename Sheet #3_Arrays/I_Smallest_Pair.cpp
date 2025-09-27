#include <iostream>
using namespace std;
int main() {
    int t, n, i,j;
    cin >> t;
    while(t--){
        cin >> n;
        int A[n];
        for(i=0;i<n;i++){
            cin >> A[i];
        }
        int ans = INT_MAX;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                ans = min(ans,A[i]+A[j]+j-i);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
