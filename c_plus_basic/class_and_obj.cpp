#include <iostream>
using namespace std;

namespace c_n_o{

    class Book{
        public:
            string title;
            string author;
            int pages;

    };

    int main (){
        Book book1;
        book1.title="Harry potter";
        book1.author="JK Rowling";
        book1.pages=500;

        Book book2;
        book2.title="Harry potter";
        book2.author="JK Rowling";
        book2.pages=500;

        cout<<book1.pages<<endl;


        return 0;

    }
}