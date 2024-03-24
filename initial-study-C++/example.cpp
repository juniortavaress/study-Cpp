#include <iostream>
#include "example.h"
using namespace std;

// To compile more than one file
// g++ main_class.cpp example.cpp -o output\example_of_class_different_files.exe

// Constructor
example::example(){
    cout << "Which flavor do you want information about?" << endl;
    cout << "1 - Peperoni" << endl;
    cout << "2 - Chicken Supreme" << endl;
    cout << "3 - Margherita" << endl;
    cout << "4 - Jamon & Cheese" << endl;    
}

void example::get_pizzas_info(int flavor){
    this->flavor = flavor;
    cout << "The size is " << size << " and the price is " << price << endl;
}

void example::set_info(int size, int price){
    this->size = size;
    this->price = price;
}