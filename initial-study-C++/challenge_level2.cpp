#include <iostream>
#include <math.h> 
#include <cstddef>
#include <vector>
using namespace std;

void food_expenses(){
    float exp1, exp2, exp3, exp4, exp5, avar;
    cout << "Please provide the monthly food expenses for each family" << endl;
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
}


void array_addition(){
    int n_array, row, col;

    cout << "\nPlease provide the numbers of arrays that you want add: " << endl;
    cin >> n_array;
    cout << "\nPlease provide the dimension of this arrays, rows and then columns: " << endl;
    cin >> row;
    cin >> col;

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

    vector<vector<int>> add_array(row, vector<int>(col, 0));
    for(int k=0; k < n_array; k++){
        for (int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                add_array[i][j] += arrays[k][i][j];
            }
        }
    }

    cout << "\nResultant array after addition: " << endl;
    for (int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << add_array[i][j] << " ";
        }
        
        cout << endl;
    }
}


int main(){

    // food_expenses();
    array_addition();

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