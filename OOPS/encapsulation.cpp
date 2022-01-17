#include <iostream>
using namespace std;

// encapsulation
// hiding sensitive info from the user

class marvel
{
private: // access specifier
         // access by only own class
    int a;
    void funcA()
    {
        cout << " function A" << endl;
    }

public: // access specifier
        // access by  own class,derived class,and outside the class
    int b;
    void funcB()
    {
        cout << " function B" << endl;
    }

protected: // access specifier
           // access by  own class and derived class
    int c;
    void funcC()
    {
        cout << " function C" << endl;
    }
};

int main()
{
    marvel obj;
    obj.b = 12;
    obj.funcB();
    // obj.funcA();   shows error

    return 0;
}