#include <iostream>
using namespace std;

namespace point{
    int main(){
        int age=19;
        double gpa=3.9;
        string name ="Mike";

        //pointers==memory address

        cout <<"age"<< &age; //print memory address
        cout <<"name"<< &name;
        cout <<"gpa"<< &gpa;

        //store pointers

        int *pAge=&age;
        double *pGpa=&gpa;
        string *pName =&name; 

        cout <<"age"<< pAge; //print memory address
        cout <<"name"<< pName;
        cout <<"gpa"<< pGpa;

        return 0;

    }
}