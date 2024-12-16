#include <iostream>
using namespace std;

namespace two_d_arr{
    int main(){
        int numGrid[3][2]={
            {1,2},
            {3,4},
            {5,6}
        };

        for (int i=0;i<3;i++){
            for (int j=0;j<2;j++){
                cout<<numGrid[i][j]<<endl;
            }
        }

        return 0;
    }
}