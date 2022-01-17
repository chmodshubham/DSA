#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;
    int s = 0;
    while(n != 0)
	 {
        int r = n%10;
        s = s*10 + r;
        n /= 10;
    }

    cout << "Reversed Number = " << s;

    return 0;
}

