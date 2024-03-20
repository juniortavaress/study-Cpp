#include <iostream>
#include <math.h> 
using namespace std;

// Challenges to apply the tools study until now

// Challenge 1
// User give a number, what is the value of the function f(x) = x^2 - 3x + 5?

// Challenge 2
// The user give 3 notes, quais is the average of the student, is it greater than the class average?

// Challenge 3
// Calculate the fatorial of a number provided by the user


void calculate_function(){
    float x;
    std::cout << "\nPlease, choice a positive value for x -> f(x) = x^2 - 3x + 5: ";
    cin >> x;

    float f;
    f = pow(x,2) - 3*x + 5;
    cout << "The value of the function is = " << f << endl;
}


void avarage_analyzer(){
    float avar_class, avar_student, n1, n2, n3;
    cout << "\nPlease, inform the class average: ";
    cin >> avar_class;
    cout << "Please, inform the student's grades, one by one:\n";
    cin >> n1;
    cin >> n2;
    cin >> n3;

    avar_student = (n1 + n2 + n3)/3;

    if(avar_student > avar_class){
        cout << "The student has higher average than the class average: "<< endl;
    } 
    else if (avar_student == avar_class){
        cout << "The student average is equal to the class average: "<< endl;
    }
    else{
        cout << "The student has lower average than the class average: "<< endl;
    }
}


int fat(int n)
{
    int value_fat;

    value_fat = 1;
    while (n >= 1){
        value_fat = value_fat * n;
        n--;
    }

    cout << "The fatorial is equal to: " << value_fat << endl;
    return 0;
}


void calculate_factorial(){
    int n, k = 1;
    cout << "\nPlease, inform the number for calculate the fatorial: ";
    cin >> n;
    fat(n);

    while(k != 2){
        cout << "\nDo you want to calculate another factorial?" << endl;
        cout << "1 - Yes" << endl;
        cout << "2 - No" << endl;
        cin >> k;

        if(k == 1){
            cout << "\nPlease, inform the number for calculate the fatorial: ";
            cin >> n;
            fat(n);
        }
    }
}


int main()
{ 
    int act = 0;

    while(act != 4){
        cout << "\nChoose one of the program's features: " << endl;
        cout << "1 - Calculate the value of the function f(x) = x^2 - 3x + 5 for different x." << endl;
        cout << "2 - Analyze studant avarage in relation to class avarage." << endl;
        cout << "3 - Calculate factorial of a number that you want." << endl;
        cout << "4 - Close the program" << endl;
        cin >> act;

        if(act == 1){calculate_function();}
        else if (act == 2){avarage_analyzer();}
        else if (act == 3){calculate_factorial();}
        else if (act == 4){return 0;}
        else{cout << "It's not a valid option, choose a valid value" << endl;}
    }

    system("pause"); // Pause the program for Windows systems
}