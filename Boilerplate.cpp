#include<iostream>
using namespace std;
void PrintArr(int Arr[],int size){
    for(int i=0;i<size;i++){
        cout<<Arr[i]<<" ";
    }
}
void SwapAlt(int Arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(Arr[i],Arr[i+1]);
        }
        
    }
    PrintArr(Arr,size);
        return;
}

int main(){
        int size;
        cin>>size;
        int Arr[100];

        for(int i=0;i<size;i++){
            cin>>Arr[i];
        }
        
        cout<<"Array Before swapping"<<endl;
        PrintArr(Arr,size);
        
        cout<<"Array after swapping"<<endl;
        SwapAlt(Arr,size);
        return 0;
}