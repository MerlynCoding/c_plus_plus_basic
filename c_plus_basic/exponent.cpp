# include <iostream>
using namespace std;

namespace expo{
    int power(int base,int pow){
        int result=1;
        for (int i=0;i<pow;i++){
            result *= base;
        }


        return result;
    }
    int main(){
        cout<<power(2,5)<<endl;
        return 0;
    }
}