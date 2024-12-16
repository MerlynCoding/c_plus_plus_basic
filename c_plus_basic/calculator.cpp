#include <iostream>
using namespace std;

namespace calc{
    int result(){
        int num1, num2; char op;
        cout<<"enter num1 : ";
        cin >> num1;
        cout << "enter op : ";
        cin >> op;
        cout << "enter num2 : ";
        cin >> num2;

        if (op == '+') {
            return num1 + num2;
        } else if (op == '-') {
            return num1 - num2;
        } else if (op == '*') {
            return num1 * num2;
        } else if (op == '/') {
            // Handle division by zero
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                return 0; // Return 0 for division by zero
            }
            return num1 / num2;
        } else if (op == '%') {
            // Ensure valid operands for modulus operator
            if (num2 == 0) {
                cout << "Error: Modulus by zero is not allowed." << endl;
                return 0;
            }
            return num1 % num2;
        } else {
            cout << "Error: Invalid operator." << endl;
            return 0; // Return 0 for invalid operator
        }
    }

    int run (){
        cout<<result();
        return 0;
    }
}
