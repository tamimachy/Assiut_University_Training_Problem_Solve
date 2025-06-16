#include <iostream>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    int ascii = ch;
    if(ascii >=65 && ascii <=90){
        int con = ascii + 32;
        cout << (char)con;
    }else if(ascii >=97 && ascii <=122){
        int con = ascii - 32;
        cout << (char)con;
    }
    return 0;
}
