#include <iostream>
using namespace std;


int main()
{ 
    int value = 5;
    cout << "integer : " << value << "\n" << endl;
    

    // Float tem limite de caracteres, não consegue representar 5.2e99
    // Nesse caso (cout << decimal2 << endl;) o resultado é inf ou seja infinito
    float decimal1, decimal2;
    decimal1 = 2.5;
    decimal2 = 5.2e99;
    cout << "Decimal 1, which fits into the float: " <<decimal1 << endl;
    cout << "Decimal 2, which doesn't fits into the float: " << decimal2 << "\n" << endl;

    double real = 5.2e99;
    cout << "Decimal which doesn't fits when applied to double: " << real << "\n" << endl;

    // true = 1 
    // false = 0
    bool booleano1, booleano2;
    booleano1 = true;
    booleano2 = false;
    cout << "Booleano true: " << booleano1 << endl;
    cout << "Boolenao false: " << booleano2 << "\n" << endl;

    // Char recebe so um caracter e se usa aspas simples
    char letter = 'b';
    cout << "Char only accept single letters: " << letter << endl;

    // String pode receber paralavras e se usa aspas duplas
    string word = "ball";
    cout << "String: " << word << endl;

    cin.get();
}