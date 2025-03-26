#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

void sub(int a, int b) {
    cout << "Difference: " << a - b << endl;  
}

void mul(int a, int b) {
    cout << "Product: " << a * b << endl;  
}

void division(int a, int b) {
    if (b == 0) {
        cout << "Can't divide by zero" << endl;  
    } else {
        cout << "Quotient: " << a / b << endl;
    }
}

int main() {
    int a = 0, b = 0; 
    cout << "Enter First Number: ";
    cin >> a;
    cout << "\nEnter Second Number: ";  
    cin >> b;

    //cout << "what arithmetic operator u want to use ";
    add (a , b );
    sub(a,b);
    mul (a,b);
    division(a,b);

    return 0;
}
