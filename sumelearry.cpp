#include<iostream>
using namespace std;
int ArrSum(int Arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+Arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter Size of the Array";
    cin>>size;
    int Arr[100];
    for(int i=0;i<size;i++){
        cin>>Arr[i];
    }
    int sum=ArrSum(Arr,size);
    cout<<"Sum of all element of Array is : "<<sum<<endl;
    return 0;
}