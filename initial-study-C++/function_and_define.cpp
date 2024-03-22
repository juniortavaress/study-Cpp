#include <iostream>
using namespace std;

// Define is used to assign values to constants that will not be altered 
// Define can also be assigned to specific tasks
#define pi 3.14;
#define end cout << "That's the end of the code!\n\n"


// Use "void" when there is no output.
// A function with empty () does not take any arguments.
void write(int x, int y, int z)
{
    cout << "That just prints the message.\nFor example, you can simply call the function and print variables." << endl;
    cout << "Values: " << x << ", " << y << ", " << z << "\n" << endl;
}


// Use "int" when there is output.
// The function with values inside the (values) receives arguments.
int add(int a, int b)
{
    int soma; 
    soma = a+b;
    cout << "The sum of a + b is: " << soma << "\n" <<endl;
    return soma;
}


// Defining variables within a function only changes them within that function
// To redefine a local variable in another function, it's necessary to pass it with as & 
int change (int &k)
{
    k=10;
}


int main()
{ 
    write(0, 0, 0);
    int x, y, z;
    x = add(5,2);
    y = add(3,7);
    z = add(x, y);
    write(x, y, z);

    int k=5;
    cout << "The initial value of k was: " << k << endl;
    change(k);
    cout << "The new value of k is: " << k << "\n" << endl;

    // Define
    double n = pi;
    cout << "The value of pi is: " << n << "\n" << endl;
    end;

    system("pause"); // Pause the program for Windows systems
}