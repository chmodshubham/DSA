#include <iostream>
using namespace std;

void swap(int* aptr , int* bptr)
{
	int temp = *aptr;
	*aptr=*bptr;
	*bptr=temp;
}

// void swap(int& a , int& b)
// {
// 	int temp=a;
// 	a=b;
// 	b=temp;

// }

int main()
{
	int a=1;
	int b=2;
	swap(&a,&b);
	cout << a << " " << b << endl;

	// swap(a,b);
	// cout << a << " " << b << endl;
	return 0;
}
