#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of N : ";
    cin>>n;

    bool isprime=1;

    for(int i=2;i<n;i++){
        if( n % i == 0 ){
           // cout<<"Not Prime for "<<i<<endl;
            isprime=0;
            break;
        }
    }
    if(isprime==0){
        cout<<"Not a prime Number"<<endl;
    }
    else{
        cout<<"Is a prime Number"<<endl;
    }
}