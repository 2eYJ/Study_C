#include <iostream>
using namespace std;


int main(){

    int Num[4] ;

    for(int i; i<3; i++){ 
    
        int Front=0, Back=0;
        
        for (int i=0; i<4; i++){
            cin >> Num[i];
        }
        for(int i = 0; i < 4; i++){
            if(Num[i] == 0){
                Back += 1;
            }else{
                Front += 1; 
            }

        }
        if((Front == 0) && (Back ==4)) cout << "yut" << endl;
        if((Front == 1) && (Back ==3)) cout << "do" << endl;
        if((Front == 2) && (Back ==2)) cout << "ga" << endl;
        if((Front == 3) && (Back ==1)) cout << "gul" << endl;
        if((Front == 4) && (Back ==0)) cout << "mo" << endl;
    }   
}