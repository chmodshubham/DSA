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
        complex ans;              // we can only declare variable of complex data type in any other function but inside the same complex function
        ans.real = real + c.real; // ans.real = c1.real + c2.real
        ans.imag = imag + c.imag; // ans.imag = c1.imag + c2.imag
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
    complex c3 = c1 + c2; // its like, c3 = c1.+(c2)
    c3.display();
    return 0;
}