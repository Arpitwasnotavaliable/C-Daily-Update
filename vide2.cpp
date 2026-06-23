#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter N value";
    cin>>n;
    // cout<<"Value of N is"<<n<<endl;
    // if a is positive
    if(n>0){
        cout<<"N is positive"<<endl;
    }
    else{
        cout<<"N is negative"<<endl;
    }
   

    int a,b;
    cin>>a>>b;
    cout<<"value of a and b is :"<<a<<" "<<b<<endl;
    int a,b;
    cout<<"Enter the Value of A :";
    cin>>a;
    cout<<"enter the Value of B :";
    cin>>b;

    if(a>b){
        cout<<"A is greater"<<endl;
    }
    if(a<b){
        cout<<"B is greater"<<endl;
    }
    else{
        cout<<"A and B are Equal"<<endl;
    }

    int a;
    cout<<"Enter any number : ";
    cin>>a;
    if(a>0){
        cout<<"A is positive"<<endl;
    }
    else{
        if(a<0){
            cout<<"a is negative"<<endl;
        }
        else{
            cout<<"A is 0"<<endl;
        }
    }

    int a =2;
    int b= a+1;
    if((a=3)==b){
        cout<<a;
    }
    else{
        cout<<a+1;
    }

    int a=24;
    if(a>20){
        cout<<"love";
    }
    else if(a==24){
        cout<<"lovely";
    }
    else
    {
        cout<<"babbar";
    }
    cout<<a;
    char ch;
    cout<<"Enter lowercase uppercase or number :";
    cin>>ch;
    if(ch>='a' & ch<='z'){
        cout<<"lowercase"<<endl;
    }
    else if(ch>='A' & ch<='Z'){
        cout<<"Uppercase"<<endl;
    }
    else if(ch>='0' & ch<='9'){
        cout<<"Number"<<endl;
    }
  
}


