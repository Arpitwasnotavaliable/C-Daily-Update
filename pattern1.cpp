#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<" * ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    int n;
    cin>>n;

    int i=1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<" "<<i<<" " ;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<" "<<n-j+1<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
    int n;
    cin>>n;
    int count=1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<" "<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    int n;
    cin>>n;
    int c=1;
    int i=1;
    while(i<n){
        
        int j=1;
        while(j<=n){
            char ch='A'+i+j-2;
            cout<<ch;
            c=c+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
      
        while(col<=row){
        char ch='A'+row-1;
            cout<<ch;
            col=col+1;
           
        }
        cout<<endl;
        row=row+1;
    }
    int n;
    cin>>n;
    int row=1;
    char c='A';
    
    while (row<=n){
        int col=1;
      
        while(col<=row){
            cout<<c;
            col=col+1;
            c=c+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+n-i;
        while(j<=i){
            cout<<ch;
            j=j+1;
            ch=ch+1;
        }
        cout<<endl;
        i=i+1;
    
    }
}