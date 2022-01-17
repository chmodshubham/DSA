#include <iostream>
using namespace std;

// // operator overloading
class complex
{
    int imag, real; // private part

public:
    complex(int r, int i)
    {
        imag = i;
        real = r;
    }

    complex()
    {
    }

    auto operator+(complex &c) // auto is of complex type
    {
        complex ans; // we can only declare variable of complex data type in any other function but inside the same complex function
        ans.real = real + c.real;
        ans.imag = imag + c.imag;
        return ans;
    }

    void display()
    {
        cout << real << " + i" << imag << endl;
    }
};

int32_t main()
{
    complex c1(12, 6), c2(5, 4);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}