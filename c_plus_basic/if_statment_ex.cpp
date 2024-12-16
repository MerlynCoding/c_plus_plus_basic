#include <iostream>
using namespace std;

namespace state {
    int getMax(int num1, int num2) {
        int result; // Corrected variable name
        if (num1 > num2) {
            result = num1;
        } else {
            result = num2;
        }
        return result;
    }

    int getMax2(int num1, int num2,int num3) {
        int result; // Corrected variable name
        if (num1 > num2 && num1>num3) {
            result = num1;
        }else if(num3 > num2 && num3>num1){
            result = num3;
        } 
        else {
            result = num2;
        }
        return result;
    }

    int getMin(int num1, int num2) {
        int result; // Corrected variable name
        if (num1 < num2) {
            result = num1;
        } else {
            result = num2;
        }
        return result;
    }

    int getEqual(int num1, int num2) {
        int result; // Corrected variable name
        if (num1 > num2) {
            result = num1;
        } else {
            result = num2;
        }
        return result;
    }

    void run() {
        cout << getMax(5, 4) << endl;
    }
}
