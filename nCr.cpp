#include<iostream>
using namespace std;
int product (int n,int r) {  // The fuction for product the numbers without (n-r)!.
    int proDuct=n;
    for(int i=1;i<r;i++) {
        proDuct*=(n-i);
    }
    return proDuct;
}
int factorial (int n) {  // The fuction for finding factorial.
    int facTorial=n;
    for(int i=1;i<n;i++) {
        facTorial*=(n-i);
    }
    return facTorial;
}
int main() {
    int n,r;
    cout << "Enter n & r for nCr: ";
    cin >> n >> r;
    cout << "Product = " << product(n,r) << endl;
    cout << "Factorial = " << factorial(r) << endl;
    cout << "nCr = " << product(n,r)/factorial(r) << endl;
    return 0;
}