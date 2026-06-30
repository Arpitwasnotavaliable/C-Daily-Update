#include<iostream>
using namespace std;
void printArray(int arr[],int size){

    cout<<"Printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }
 
}
int main(){
 
    // int number[15];

    // cout<<"value of 14th index"<<number[14]<<endl;
    // // cout<<"value of 20th index"<<number[20]<<endl;

    // int second[3]={5,7,11};


    // cout<<"value of 2nd index"<<second[2]<<endl;
    // cout<<endl<<"Everything is fine"<<endl<<endl;
    // return 0;

    int third[15]={2,7};

    printArray(third,15);

}