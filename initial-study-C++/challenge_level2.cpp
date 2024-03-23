#include <iostream>
#include <math.h> 
#include <cstddef>
#include <vector>
using namespace std;

// Challenges to apply the tools study until now

// Challenge 1
// The user inputs expenses for 5 families on food, and it should return for each family whether their expense is below, equal to, or greater than the average

// Challenge 2
// The user can input how many matrices they want to add, as well as their order. The code should return a resulting matrix

// Challenge 3
// Working only with pointers! The user inputs two ages, and the code should return their average

void food_expenses(){
    float exp1, exp2, exp3, exp4, exp5, avar;
    cout << "\nPlease provide the monthly food expenses for each family" << endl;
    cin >> exp1;
    cin >> exp2;
    cin >> exp3;
    cin >> exp4;
    cin >> exp5;
    cout << " " << endl;

    float array_exp[5] = {exp1, exp2, exp3, exp4, exp5};
    avar = (exp1 + exp2 + exp3 + exp4 + exp5)/5;

    for (int i=0; i<5; i++){
        if (array_exp[i] > avar){cout << "Family" << (i+1) << "expenses are above avarege" << endl;}
        else if (array_exp[i] == avar){cout << "Family" << (i+1) << "expenses are equal avarege" << endl;}
        else{cout << "Family " << (i+1) << " expenses are below avarege" << endl;}
    }
    cout << endl;
}


void array_addition(){
    int n_array, row, col;

    cout << "\nPlease provide the numbers of arrays that you want add: " << endl;
    cin >> n_array;
    cout << "\nPlease provide the dimension of this arrays, rows and then columns: " << endl;
    cin >> row;
    cin >> col;

    // Acquiting the values of each matrix
    vector<vector<vector<int>>> arrays(n_array, vector<vector<int>>(row, vector<int>(col)));
    for(int k=0; k < n_array; k++){
        cout << "\nProvide the values of the array " << (k+1) << "!\n";
        for (int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cout << "Value position (" << i << ", " << j << "): ";
                cin >> arrays[k][i][j];
            }
        }
    }

    // Sum of arrays provided by the user
    vector<vector<int>> add_array(row, vector<int>(col, 0));
    for(int k=0; k < n_array; k++){
        for (int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                add_array[i][j] += arrays[k][i][j];
            }
        }
    }

    // Displaying the resulting matrix
    cout << "\nResultant array after addition: " << endl;
    for (int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << add_array[i][j] << " ";
        }

        cout << endl;
    }
    cout << endl;
}


void applying_pointers(){

    int* var1 = new int;
    int* var2 = new int;
    
    cout << endl;
    cout << "Provide the age of the first member: ";
    cin >> *var1;
    cout << "Provide the age of the second member: ";
    cin >> *var2;

    float* med = new float;
    *med = ((float)*var1 + (float)*var2)/2;
    cout << "The average is: " << *med << "\n" << endl;

    cout << endl;    
}


int main(){

    // food_expenses();
    // array_addition();
    // applying_pointers();
    int act = 0;
    while(act != 4){
        cout << "Choose one of the program's features: " << endl;
        cout << "1 - Compare food expenses." << endl;
        cout << "2 - Addition arrays." << endl;
        cout << "3 - Apply knowledge of pointers" << endl;
        cout << "4 - Close" << endl;
        cin >> act;

        if(act == 1){food_expenses();}
        else if (act == 2){array_addition();}
        else if (act == 3){applying_pointers();}
        else if (act == 4){return 0;}
        else{cout << "It's not a valid option, choose a valid value" << endl;}
    }

    system("pause"); // Pause the program for Windows systems
}