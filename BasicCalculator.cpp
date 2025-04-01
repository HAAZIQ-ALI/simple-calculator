#include <iostream>
#include <cmath>
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
void square(int a ){
    int x = a*a;
    cout << x<<endl;
}
void squareroot(float a){
    int x = sqrt(a);
    cout << "SquareRoot:"<<x<<endl;
}

int main() {
    float a = 0, b = 0; 
    char choice1 ='y';

    while(choice1 == 'y' || choice1 == 'Y'){
        cout << "Do you want to continue? (y/n): ";
        cin >> choice1;
        cout << "Enter First Number: ";
        cin >> a;
        cout << "\nEnter Second Number: ";
        cin >> b;
        char choice ;
        cout <<"Enter The Arithmatic operator for ex - + , -, * , ^ , / and ! :";
        cin >> choice;


        switch (choice){
            case '/':
            division (a , b);
            break;
            case '-':
            sub (a , b);
            break;
            case '*':
            mul(a , b);
            break;
            case '^':
            square(a);
            break;
            case '!':
            squareroot(a);
            break;
            default:
            add(a , b);
            
    
        }
        
    }
    return 0;
}
