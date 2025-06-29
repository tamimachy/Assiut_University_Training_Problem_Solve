#include <bits/stdc++.h>
using namespace std;
int main(){
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;
    if(S == '+'){
            if(A+B == C)
                cout << "Yes";
            else
                {
                    C = A+B;
                    cout << C;
                }
            }
        else if(S == '-'){
            if(A-B == C)
                cout << "Yes";
            else
                {
                    C = A-B;
                    cout << C;
                }
            }
        if(S == '*'){
            if(A*B == C)
                cout << "Yes";
            else
                {
                    C = A*B;
                    cout << C;
                }
            }
    return 0;
}
