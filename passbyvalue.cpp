#include<iostream>
using namespace std;

int dummy(int n){

    n++;
    cout<<"Value is : "<<n<<endl;

}



int main(){
        int n;
        cin>>n;
        dummy(n);
        cout<<"Number is : "<<n<<endl;
        return 0;
}