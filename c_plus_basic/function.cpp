#include <iostream>

using namespace std;

namespace fun{

    void sayHiBasic(){
        cout<<"Hello user"<<endl;
    }

    void sayHi(string name,int age){
        cout<<"Hello "<<name<<" you are "<<age<<" years old"<<endl;
    }

    int main(){
        cout<<"Top"<<endl;
        sayHi("Mike",3);
        cout << "bottom"<<endl;
        sayHi("Mike",3);
        cout << "bottom"<<endl;

    

        return 0;
    }
}

