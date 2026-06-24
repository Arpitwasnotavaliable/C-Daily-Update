#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int space=row-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int col=n-row+1;
        while(col){
            cout<<row;
            col=col-1;
        }
        cout<<endl;
        row=row+1;
    }

    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while(col<=row){
            cout<<col;
            col=col+1;
        }
        int t=row-1;
        while(t){
            cout<<t;
            t=t-1;
        }
        cout<<endl;
        row=row+1;
    }
    

}