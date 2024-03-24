#include <iostream>
#include "example.h"
using namespace std;

// To compile more than one file
// g++ main_class.cpp example.cpp -o output\example_of_class_different_files.exe

int main(){
    int flavor;
    
    example info;
    cin >> flavor;
    if(flavor == 1){info.set_info(1, 20);}
    else if(flavor == 2){info.set_info(2, 30);}
    else if(flavor == 3){info.set_info(3, 40);}
    else if(flavor == 4){info.set_info(4, 60);}

    info.get_pizzas_info(flavor);
    system("pause"); // Pause the program for Windows systems
}
