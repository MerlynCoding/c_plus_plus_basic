#include <iostream>
using namespace std;

namespace student{

    class student{
        public:
            string name;
            string major;
            int gpa;

            student(string aname,string amajor, int agpa ){
                name=aname;
                major=amajor;
                gpa=agpa; 
            }

            bool isHonor(){
                if (gpa>250){
                    return true;
                }else{
                    return false;
                }
            }


    };

    int main (){
        student student1("Harry potter","Business",340);
        student student2("Ken","Art",250);

        cout<<student1.isHonor();


        return 0;

    }
}