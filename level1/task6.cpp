#include <iostream>

int main() 
{
    int a = 10;
    
    int* a_ptr = &a;
    *a_ptr = 100;

    std::cout << a << std::endl;

    int& a_ref = a;
    a_ref = 200;

    std::cout << a << std::endl;

    return 0;
}
