#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i=i+1;
    }
    int n;
    cin>>n;
    int i=0;
    int sum=0;
    while (i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<sum<<endl;
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"N is not prime for "<<i<<endl;
        }
        else{
            cout<< "N is prime for "<< i <<endl;
        }
        i=i+1;
    }
     
}