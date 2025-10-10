#include <iostream>
#include<string>
using namespace std;
/*int main() {
    int a,b, i;
    cin >> a>> b;
    string code;
    cin >> code;
    int s = code.size();
    if(s<a || code[a]!='-'){
        cout<< "No\n";
        return 0;
    }
    for(i=0;i<s;i++){
        if(code[i]>='0' and code[i]<='9'){
            continue;
        }
        if(i!=a){
            cout<<"No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}*/

// 2nd Way

int main() {
    int a,b, i, d=0;
    cin >> a>> b;
    string code;
    cin >> code;
    int s = code.size();
    for(i=0;i<s;i++){
        if(code[i]!='-')
            d++;
    }
    if(code[a]=='-'&& d==a+b){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    return 0;
}
