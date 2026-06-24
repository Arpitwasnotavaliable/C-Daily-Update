#include<iostream>
using namespace std;
int main(){
     int n;
   cin>>n;
   int i=1;
   while(i<=n){
    //left triangle
        int col=n-i+1;
        int c=1;
        while(col){
            cout<<c;
            col=col-1;
            c=c+1;
        }
   // middle triangle
      int stars=(i-1)*2;
        while(stars){
            cout<<"*";
            stars=stars-1;
            
        }
    //right triangle
        int j=n-i+1;
        while(j){
            cout<<j;
            j=j-1;
        }
        cout<<endl;
        i=i+1;

   }

}