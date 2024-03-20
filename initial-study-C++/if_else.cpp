#include <iostream>
using namespace std;

int main()
{ 
    float note1, note2, avarage;
    cout << "Write the note 1: " << endl;
    cin >> note1;
    cout << "Write the nota 2: " << endl;
    cin >> note2;

    avarage = (note1 + note2)/2;

    if(avarage >= 5){
        cout << "\nStudent passed.\nAvarage: " << avarage << endl;
    } 
    else if(avarage >=3){
        cout <<"\nStudent failed.\nAvarage: " << avarage << endl;
    }
    else{
        cout << "\nStudent failed.\nMedia: " << avarage <<endl;
    }


    // "Logical Operators
        // And -> &&
        // Or -> ||
        // No -> !
    
    float freq;
    cout << "\n\nEVALUATING ATTENDANCE" << endl;
    cout << "What is the attendance frequency?" << endl;
    cin >> freq;

    if (avarage >= 5 && freq >= 75){
        cout << "\nStudent passed.\n" << freq << endl;
    }
    else{cout << "\nStudent failed.\n" << endl;}


// Ternary Operator
// Condition ? if true : if false
    (avarage = 5) ? cout << "Passed" : cout << "Failed";

    system("pause"); // Pause the program for Windows systems
}