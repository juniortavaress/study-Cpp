#include <iostream>
#include <math.h> 
#include <cstddef>
using namespace std;

int main(){
    // The type of the pointers is always the same as the variable it will access
    int var1;
    int* point1;

    var1 = 5;
    point1 = &var1;

    cout << "The value of the variable is: " << var1 << endl;
    cout << "The adress of the first bite of the variable is: " << point1 << endl;
    cout << "The value of the variable accessed through the pointers is: " << *point1 << endl;


    // To create a pointer without a value, it's necessary to include the 'cstddef' library to declare it as null
    // If this is not done or a location is not defined, it will have a random memory adress that may contain a value
    int* point2;
    cout << "The initial value of the pointer is: " <<  *point2 << endl;
    point2 = NULL;
    cout << "The new value of the pointer is: " << point2 << endl;


    // Using 'new', it's possible to not define the value of the pointer
    // In this case, a new empty space is created
    int* point3 = new int;
    cout << "The initial value of the pointer is: " << point3 << endl;
    *point3 = 35;
    cout << "The new value of the pointer is: " << *point3 << endl;

    system("pause"); // Pause the program for Windows systems
}