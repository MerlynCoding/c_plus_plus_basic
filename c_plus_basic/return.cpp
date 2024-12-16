#include <iostream>
using namespace std;

double cube(double num){
	double result =num*num*num;
	return result;
}

namespace result{
    int main()
    {
        cout << cube(5.0);
        return 0;
    }
}