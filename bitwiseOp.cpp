// #include<iostream>
// using namespace std;
// int main(){

//     int a=4;
//     int b=6;
//     cout<< " a&b " << a&b <<endl;
//     cout<< " a|b " << a|b <<endl;
//     cout<< " ~a " << ~a <<endl;
//     cout<< " a^b " << a^b <<endl;
// }
#include<iostream>
using namespace std;
int main(){

    int a = 4;  // binary: 0100
    int b = 6;  // binary: 0110

    cout << " a&b = " << (a & b) << endl;  // AND
    cout << " a|b = " << (a | b) << endl;  // OR
    cout << " ~a  = " << (~a)    << endl;  // NOT
    cout << " a^b = " << (a ^ b) << endl;  // XOR

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;
}