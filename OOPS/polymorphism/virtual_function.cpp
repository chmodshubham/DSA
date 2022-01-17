#include <iostream>
using namespace std;

// virtual functions
class base
{
public:
    virtual void func1() // virtual is actual making this function non- existance
    {
        cout << "this is the base class fucntion1\n";
    }

    void func2()
    {
        cout << "this is the base class fucntion2\n";
    }
};

class derived : public base
{
public:
    void func1()
    {
        cout << "this is the derived class fucntion1\n";
    }

    void func2()
    {
        cout << "this is the derived class fucntion2\n";
    }
};

int32_t main()
{
    base *baseptr;
    derived dev;
    baseptr = &dev; // baseptr is storing the adress of dev

    baseptr->func1(); // basiically we use ->  but not  point(.) to call a member function
    // so we get derived class func1 for this bcaz we had added virtual before void function
    baseptr->func2();
    // here we get base class func2

    return 0;
}