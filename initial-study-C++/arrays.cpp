#include <iostream>
#include <math.h> 
#include <cstddef>
using namespace std;

void staticAllocation(){
    // Creating a array, index start at 0
    int vect1[4];

    vect1[0] = 1;
    vect1[1] = 2;
    vect1[2] = 3;
    vect1[3] = 4;

    cout << "\nThe size of the array is: " << (sizeof(vect1)/sizeof(int)) << endl;
    cout << "The values inside the array are: " << vect1[0] << ", " << vect1[1] << ", " << vect1[2] << ", " << vect1[3] << endl;


    // If define an array of size 4 but only define three values, the last one automatially becomes zero
    int vect2[4] = {2, 3, 6};
    cout << "\nThe size of the array is: " << (sizeof(vect2)/sizeof(int)) << endl;
    cout << "The values inside the array are: " << vect2[0] << ", " << vect2[1] << ", " << vect2[2] << ", " << vect2[3] << endl;

    
    // If don't define the size of the array, it will be the size of the defined values
    // And if try to acess an index outside the array, a 'ramdom' value will be accessed
    int vect3[] = {3, 5};
    cout << "\nThe size of the array is: " << (sizeof(vect3)/sizeof(int)) << endl;
    cout << "The values inside the array are: " << vect3[0] << ", " << vect3[1] << ", " << vect3[2] << "\n" << endl;
}


void dinamicAllocation(){
    // Creating a array, index start at 0
    int size;
    cout << "\nWhat is the size of the array?" << endl;
    cin >> size;
    int* vector = new int[size];

    for (int i=1; i<=size; i++){
        cout << "Type the element " << i << " of the vector" << endl;
        cin >> vector[(i-1)];
    }

    cout << "The vector's values is: [ ";
    for (int i=0; i<size; i++){cout << vector[i] << " ";}
    cout << "]." << endl;
}


int main(){

    int act = 0;

    while(act != 3){
        cout << "Choose one of the program's features: " << endl;
        cout << "1 - Study static allocation." << endl;
        cout << "2 - Study dinamic allocation." << endl;
        cout << "3 - Close the program" << endl;
        cin >> act;

        if(act == 1){staticAllocation();}
        else if (act == 2){dinamicAllocation();}
        else if (act == 3){return 0;}
        else{cout << "It's not a valid option, choose a valid value" << endl;}
    }
    system("pause"); // Pause the program for Windows systems
}