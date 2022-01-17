#include <iostream>
using namespace std;

void increment(int a)
{
	a++;
	
}

int main()
{
	int a=10;
	increment(a);
	cout << a << endl;      // value of a didnt incremented as void increment() function is just calling the value of the a ; didnt brought any change to a
	return 0;
}
// in order to change the value of a , we have to use refrence pointer , example


//void increment(int* aptr)
//{
//	++*aptr;
//	
//}
//
//int main()
//{
//	int a=10;
//	increment(&a);
//	cout << a << endl;     
//	return 0;
//}
