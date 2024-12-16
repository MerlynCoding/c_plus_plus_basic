#include <iostream>
using namespace std;


namespace inh{

    class chef{
        public:
            void makechichken(){
                cout<<"chef make chicken"<<endl;
            }
            void makesalad(){
                cout<<"chef make salad"<<endl;
            }
            void makesomethingspecial(){
                cout<<"chef make crab"<<endl;
            }
    };

    class Italianchef : public chef{
        public:
            void makesphagetti(){
                cout<<"chef make sphagetti"<<endl;
            }
            void makepizza(){
                cout<<"chef make pizz"<<endl;
            }
            void makesomethinggood(){
                cout<<"chef make bolognize sphagetti"<<endl;
            }
    };

    int main() {

        chef chef;
        chef.makechichken();
        Italianchef italianchef;
        italianchef.makesomethinggood();
        


        return 0;
    }
}