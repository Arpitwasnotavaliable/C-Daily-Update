#include<iostream>
using namespace std;
int main(){

    int money;
    int note100,note50,note20,note1;

    cout << "Enter the amount : ";
    cin>>money;

    switch(1){
        case 1:
            note100=money/100;
            money %=100;
        
        case 2:
            note50=money/50;
            money %=50;
        
        case 3:
            note20=money/20;
            money %=20;

        case 4:
            note1=money;

        cout<<"Number of 100 note : " <<note100<<endl;
        cout<<"Number of 50 note : " <<note50<<endl;
        cout<<"Number of 20 note : " <<note20<<endl;
        cout<<"Number of 1 note : " <<note1<<endl;

    }

    
    


}