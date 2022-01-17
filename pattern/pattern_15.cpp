#include <iostream>
using namespace std;

int main()
{
	int i,n;
    char p;
    p='a';
    cout << p << endl;
    for (i=1;i<=4;i++)
    {
     for (n=1;n<=i;n++)
     {
       cout << "*" ;	
	 }
	 cout << endl;
	}
	return 0;
}
