#include <iostream>
using namespace std;
int main() {
    int n,x,y,j,sum;
    cin >> n;
    for(int i=1; i<=n;i++){
        cin>>x>>y;
        j=0;
        sum =0;
        if(x<y){
            x++;
            for(int j = x; j<y; j++){
                if(j%2!=0){
                    sum = sum + j;
                }

            }
        }else if(x>y){
            y++;
            for(j =y; j<x; j++){
                if(j%2!=0){
                    sum = sum + j;
                }

            }
        }else if(x==y){
            sum = 0;
        }
        cout << sum << endl;

    }
    return 0;
}
