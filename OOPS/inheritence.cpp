#include <iostream>
using namespace std;

// inheritance
// inherit attributes and methods from one class to another

class marvel // parent class or base class
{
    int a;
};

class avengers : public marvel // child class or inherited class or derived class
{
    int b;
};

// single inheritance
class abc
{
public:
    void func()
    {
        cout << " inherited" << endl;
    }
};

class a : public abc // in this , public access specifier give an information that we are inheriting the public and protected part of  class 'abc' into the public part of the class 'a'
{
};

// multiple inheritance
class def
{
public:
    void func1()
    {
        cout << " multiple1" << endl;
    }
};

class ghi
{
public:
    void func2()
    {
        cout << " multiple2" << endl;
    }
};

class d : public def, public ghi
{
};

// multi level inheritance
class jkl
{

public:
    void func1()
    {
        cout << "multi level 1\n";
    }
};

class mno : public jkl
{
public:
    void func2()
    {
        cout << "multi level 2\n";
    }
};

class j : public mno
{
};

// hybrid inheritance
//  random inheritance structure will form

// hierarchial inheritance
//  a tree like inheritance structure will form

int main()
{
    a spidey;
    spidey.func();

    d vibhu;
    vibhu.func1();
    vibhu.func2();

    j abhay;
    abhay.func1();
    abhay.func2();

    return 0;
}