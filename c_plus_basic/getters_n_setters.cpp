#include <iostream>
using namespace std;

namespace con3{

    class Book{
        private:
            string rate;
        public:
            string title;
            string author;
            int pages;
            

            Book(string atitle,string aauthor, int apages ,string arate){
                title=atitle;
                author=aauthor;
                pages=apages; 
                rate=arate;
            }

            void setrating(){
                if (rate=="bad" || rate=="so so"){
                    rate="normal";
                }else{
                    rate="perfect";
                }
            }

            string getrate(){
                return rate;
            }

    };

    int main (){
        Book book1("Harry potter","JK Rowling",500,"good");
        Book book2("Harry potter","JK Rowling",500,"bad");
      

        cout<<book1.getrate()<<endl;


        return 0;

    }
}