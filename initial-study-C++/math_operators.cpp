#include <iostream>
#include <math.h>       // Libraries with math functions
using namespace std;


int main()
{ 
    // If don't need to store the value, it can print it directly
    int a=5, b;

    cout << "The value of a is: " << endl;
    cout << "What is the desired value of b? " << endl;
    cin >> b;

    cout << "Sum: " << a + b << endl;

    int sub = a - b;
    cout << "Subtraction: " << sub << endl;

    int mult = a*b;
    cout << "Multiplication: " << mult << endl;

    int quociente_div = a/b;
    cout << "Quotient: " << quociente_div << endl;

    int resto_div = a%b;
    cout << "Remainder: " << resto_div << endl;

    float div = (float)a / (float)b;
    cout << "Division: " << div << endl;

    float pot = pow(a,b);  //a^b
    cout << "Power: " << pot << endl;

    // Incremento e decremento
    // a = a + 1;   ou  a+=1;  ou a++;
    // a = a - 1;   ou  a-=1;  ou a--;
    // a*=2; => a*2
    cout << "The initial value of a was: " << a << endl;
    a++;
    cout << "The new value of a is: " << a << endl;

    system("pause"); // Pause the program for Windows systems
}