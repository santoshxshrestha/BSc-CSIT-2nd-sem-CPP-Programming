#include <cmath>
#include <iostream>
int main() {
    int a = 53;
    int size_of_int = sizeof(a);
    std::cout <<"size of integer is " << size_of_int<<".\n";

    char character = 'a';
    std::cout <<"size of character is " <<sizeof(character)<< ".\n";

    float float_val = 424.23;
    std::cout <<"size of float value is " <<sizeof(float_val) << ".\n";

    double double_val = 423.423224232;
    std::cout <<"size of double value is " <<sizeof(double_val) << ".\n";


    bool bool_val = true; 
    std::cout <<"size of boolean value is " <<sizeof(bool_val) << ".\n";

}
