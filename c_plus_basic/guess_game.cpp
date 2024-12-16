#include <iostream>
using namespace std;

namespace guess{
    int secretnum(){
        int secnum=7;
        int guessLimit=4;
        int guescount=0;
        bool out=false;
        int guess;

            while (secnum != guess)
            {
                if (guescount<=guessLimit){
                        cout<< "enter guess : ";
                        cin >> guess ; 
                        guescount++; 
                    }else{
                        out=true;
                        break;
                    }
                
            }
            
            if (out=false){
                    cout << "you win ! ";
                }
            else{
                    cout << "you lose ! ";
                
            }
            
        
      
        
        

    }
    int main (){
        secretnum();
        return 0;
    }

}