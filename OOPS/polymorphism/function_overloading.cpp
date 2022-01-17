#include <iostream>
using namespace std;

// polymorphism
// multiple members with same name
// 2 types of  polymorphism are compile time and run time
//  compile time is further divided into function overloading and operator  overloading
// run time contain virtual functions

// function overloading
class disney
{
public:
    void func()
    {
        cout << "function with no arguments \n";
    }

    void func(int x)
    {
        cout << "function with integer arguments \n";
    }

    void func(double x)
    {
        cout << "function with double arguments \n";
    }
};

int32_t main()
{
    disney super;
    super.func();
    super.func(22);
    super.func(12.4);
    return 0;
}