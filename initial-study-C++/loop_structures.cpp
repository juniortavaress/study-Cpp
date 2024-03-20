#include <iostream>
using namespace std;

int main()
{ 
    int n;
    std::cout << "Please, choice a positive value: ";
    cin >> n;

    int sum = 0;
    int cont = 1;


    // Using while
    while (cont <= n){
        sum += cont;
        cont ++;
    }
    cout << "While - The sum of the numbers up to the chosen value is = " << sum << endl;


    // Using do_while
    // If the chosen number = 0, there will be a error, and the sum will be 1, because the task is executed once before the while loop
    sum = 0;
    cont = 0;
    do{
        sum += cont;
        cont++;
    }   while(cont <= n);

    cout << "Do_While - The sum of the numbers up to the chosen value is = " << sum << endl;


    // for(initial, end, step)
    sum = 0;
    for (int j=1; j<=n; j++){
        sum += j;
    }   
    cout << "For - The sum of the numbers up to the chosen value is = " << sum << endl;


    system("pause"); // Pause the program for Windows systems
}