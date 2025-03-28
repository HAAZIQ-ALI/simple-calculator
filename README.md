# Basic Arithmetic Calculator

## 📌 Overview
This is a simple **C++ Arithmetic Calculator** that takes two numbers as input and performs basic arithmetic operations:
- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)
- Square('^')

## 🛠 Features
✅ infinite operations
✅ Takes two numbers as input
✅ Performs all four arithmetic operations
✅ Checks for division by zero and handles errors properly
✅ Outputs the results for each operation

## 🚀 How to Run
### 1️⃣ Clone the Repository
```sh
 git clone https://github.com/HAAZIQ-ALI
 cd <repository-folder>
```

### 2️⃣ Compile the Program
```sh
g++ calculator.cpp -o calculator
```

### 3️⃣ Run the Program
```sh
./calculator
```

## 📜 Code Example
```cpp
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
    int a, b;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "\nEnter Second Number: ";
    cin >> b;

    add(a, b);
    sub(a, b);
    mul(a, b);
    division(a, b);

    return 0;
}
```

## 📝 Notes
- Ensure that you have **g++** installed to compile the C++ program.
- The program will ask for two numbers and display all operations' results.
- If division by zero is attempted, an error message will be displayed.

## 📌 Author
🔗 **GitHub:** [HAAZIQ-ALI](https://github.com/HAAZIQ-ALI)

---
🚀 **Happy Coding!**
  ## The One Piece Is Real 
