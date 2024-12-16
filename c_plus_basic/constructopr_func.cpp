#include <iostream>
using namespace std;

namespace con{

    class Book{
        public:
            string title;
            string author;
            int pages;

            Book(string name ){
                cout<<"creating "<<name<<" book"<<endl;
            }

    };

    int main (){
        Book book1("Harry potter");
        book1.title="Harry potter";
        book1.author="JK Rowling";
        book1.pages=500;

        Book book2("Harry potter");
        book2.title="Harry potter";
        book2.author="JK Rowling";
        book2.pages=500;

        cout<<book1.pages<<endl;


        return 0;

    }
}