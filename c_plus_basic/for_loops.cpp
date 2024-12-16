#include <iostream>
using namespace std;

namespace for_loops{
    
    int loops(){
        int x=5;
        for (int i=0;i<=x;i++){
            cout<<i<<endl;
        }

    }

    int loop(){
        int nums[]={2,3,6,7};
        for (int i=0;i<4;i++){
            cout<<nums[i]<<endl;
        }
    }
    
    int main(){
        cout<<loop()<<endl;
        return 0;
    }
}