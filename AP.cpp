#include<iostream>
using namespace std;
int AP(int n){
    int ans=(3*n+7);
    return ans;
}
int main(){
    int n;
    cout<<"Give Value of N : ";
    cin>>n;
    cout<<"Arithimetic Progression of N is "<<AP(n)<<endl;
    return 0;
}
