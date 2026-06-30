#include<iostream>
using namespace std;

void fib() {
    int n;
    cin >> n;

    int num1 = 0, num2 = 1;

    for (int i = 1; i < n-1; i++) {
        int nextnum = num1 + num2;
        num1 = num2;
        num2 = nextnum;
    }
    cout << num2 << endl;
}

int main() {
    fib();
}