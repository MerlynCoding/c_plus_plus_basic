#include <iostream>
using namespace std;

namespace swit {
    string dayname(int daynum) {
        string daynam;
        switch (daynum) {
            case 0:
                daynam = "Sunday";
                break;
            case 1:
                daynam = "Monday";
                break;
            case 2:
                daynam = "Tuesday";
                break;
            case 3:
                daynam = "Wednesday";
                break;
            case 4:
                daynam = "Thursday";
                break;
            case 5:
                daynam = "Friday";
                break;
            case 6:
                daynam = "Saturday";
                break;
            default:
                daynam = "Invalid day number"; // Handle invalid input
                break;
        }
        return daynam;
    }

    int run(){
        cout<<dayname(6)<<endl;
        return 0;
    }
}