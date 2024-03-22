#include <iostream>
#include <math.h> 
#include <cstddef>
using namespace std;


int main(){

    int array_2D[2][3];

    array_2D[0][0] = 11;
    array_2D[0][1] = 12;
    array_2D[0][2] = 13;

    array_2D[1][0] = 21;
    array_2D[1][1] = 22;
    array_2D[1][2] = 23;

    cout << "Array_2D: " << endl;
    for (int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << array_2D[i][j] << " ";
        }
        cout << endl;
    }
    

    // while(act != 3){
    //     cout << "Choose one of the program's features: " << endl;
    //     cout << "1 - Study static allocation." << endl;
    //     cout << "2 - Study dinamic allocation." << endl;
    //     cout << "3 - Close the program" << endl;
    //     cin >> act;

    //     if(act == 1){staticAllocation();}
    //     else if (act == 2){dinamicAllocation();}
    //     else if (act == 3){return 0;}
    //     else{cout << "It's not a valid option, choose a valid value" << endl;}
    // }

    system("pause"); // Pause the program for Windows systems
}