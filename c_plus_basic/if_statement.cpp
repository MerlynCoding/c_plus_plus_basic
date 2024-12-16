#include <iostream>

using namespace std;

namespace IfStatement{

    int main(){

        bool isMale = true;
        bool isTall=false;

        if (isMale || isTall){
            cout<<"you are male"<<endl;
        }
        else if (isMale && isTall){
            cout<<"you are male"<<endl;
        }

        else if (isMale && !isTall){
            cout<<"you are male"<<endl;
        }
        else {
            cout<<"you are male"<<endl;
        }


        return 0;
    }
}