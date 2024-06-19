#include<iostream>

int x = 1;

namespace nspace
{
    int x = 2;
    int y = 3;
    int z = 4;
}

int main()
{
    using namespace nspace;
    int x=2;
    int y = 5;
    
    //error: reference to ‘x’ is ambiguous
    std::cout << " " << x;
    // std::cout << " " << ::x;
    std::cout << " " << y;
    //error: ‘::y’ has not been declared
    // std::cout << " " << ::y;
    std::cout << " " << z;
    //error: ‘::z’ has not been declared
    // std::cout << " " << ::z;
    // void fun();
    // fun();
    return 0;
}
// void fun()
// {
//     std::cout << " " <<  x;
// }
