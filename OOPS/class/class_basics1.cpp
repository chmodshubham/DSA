#include <iostream>
using namespace std;

class student
{
    // by default the data members are private
public:
    string name; // data members
    int age;     // data members
    char gender; // data members

    void printinfo() // member function
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
    student a; // objects
    a.name = "Spidey";
    a.age = 18;
    a.gender = 'M';

    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << " Name = ";
        cin >> arr[i].name;
        cout << " Age = ";
        cin >> arr[i].age;
        cout << "Gender = ";
        cin >> arr[i].gender;
    }
    for (int i = 0; i < 3; i++)
        arr[i].printinfo();
    return 0;
}