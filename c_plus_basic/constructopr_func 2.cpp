#include <iostream>
using namespace std;

namespace con2{

    class Book{
        public:
            string title;
            string author;
            int pages;

            Book(string atitle,string aauthor, int apages ){
                title=atitle;
                author=aauthor;
                pages=apages; 
            }

    };

    int main (){
        Book book1("Harry potter","JK Rowling",500);
        Book book2("Harry potter","JK Rowling",500);
      

        cout<<book1.pages<<endl;


        return 0;

    }
}