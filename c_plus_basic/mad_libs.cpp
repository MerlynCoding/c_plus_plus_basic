#include <iostream>
#include <cmath>

using namespace std;
namespace madlib{
    int main(){

        cout<<"Roses are red"<<endl;
        cout<<"violets are blue"<<endl;
        cout<<"i love you "<<endl;

        string color,pluralnoun,celebrity;

        cout<<"enter a color : ";
        getline(cin,color);
        cout<<"enter a pluralnoun : ";
        getline(cin,pluralnoun);
        cout<<"enter a celebrity : ";
        getline(cin,celebrity);

        cout<<"Roses are "<<color<<endl;
        cout<<pluralnoun<<"are blue"<<endl;
        cout<<"i love "<<celebrity<<endl;



        return 0;
    }
}