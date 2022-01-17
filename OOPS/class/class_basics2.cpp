#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    char gender;

    student()
    {
        cout << "Default constructor" << endl;
    } // default constructor

    student(string s, int a, char g)
    {
        cout << "parameterised constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } // parameterised constructor

    student(student &a)
    {
        cout << "copy constructor" << endl;

        name = a.name;
        age = a.age;
        gender = a.gender;
    } // copy constructor

    ~student() // destructor
    {
        cout << " destructor called" << endl;
    }

    bool operator==(student &z) // operator  overloading
    {
        if (name == z.name && age == z.age && gender == z.gender)
            return true;

        return false;
    }

    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout << name << endl;
    }

    void printinfo()
    {
        cout << " Name = ";
        cout << name << endl;
        cout << " Age = ";
        cout << age << endl;
        cout << "Gender = ";
        cout << gender << endl;
    }
};

int main()
{

    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout << " Name = ";
    //     cin >> s;
    //     arr[i].setName(s);
    //     cout << " Age = ";
    //     cin >> arr[i].age;
    //     cout << "Gender = ";
    //     cin >> arr[i].gender;
    // }
    // for (int i = 0; i < 3; i++)
    //     arr[i].printinfo();

    student a("spidey", 13, 'M');
    a.printinfo();

    student b("vibhu", 11, 'f');

    student c(a); // or can also be written as student c  = a;

    if (c == a)
        cout << "same" << endl;
    else
        cout << "not same" << endl;

    if (b == a)
        cout << "same" << endl;
    else
        cout << "not same" << endl;

    return 0;
}