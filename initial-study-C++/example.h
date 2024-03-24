#include <cstddef>
#include <string>

// To compile more than one file
// g++ main_class.cpp example.cpp -o output\example_of_class_different_files.exe

class example{
    private:
        float price;
        int size;
        int flavor;

    public:
    // Constructor
    example();
    void get_pizzas_info(int flavor);
    void set_info(int size, int price);
};