#include <iostream>
using namespace std;

int main()
{
	//     (2000,2004,2008,2012)
	int arr[] = {10, 20, 30, 40};
	cout << *arr << endl; // *arr give the value at index 0 and to get the value at other indexes we have to use *(arr+i) where i=1,2,3,..
						  // this shows that arr is actually acting like a pointer
	// int *ptr = arr;
	// cout << ptr << endl;
	// for (int i = 0; i < 4; i++)
	// {
	// 	cout << *ptr << endl;
	// 	ptr++;
	// }

	//          OR
	for (int i = 0; i < 4; i++)
	{
		cout << *(arr + i) << endl;
		// arr is an indexing pointer
		// arr++ is the wrong way to represent the incrementation part
	}

	int arr1[] = {1, 2, 3, 4, 5, 6, 7};
	int *ptr = arr1;
	cout << ptr[2] << endl; // 3
	cout << ptr << endl;	// address

	cout << *ptr++ << endl; // 1
	cout << ptr[1] << endl; // 3
	cout << *ptr++ << endl; // 2
	cout << *++ptr << endl; // 4

	cout << arr1 << endl;	  // address
	cout << arr1 + 1 << endl; // address

	int &ptr2 = arr1[0];   // ptr2 is a variable which is storing value at arr1[0] and having the same address of arr1[0] due to which we can say that ptr2 is pointing the arr1[0]
	cout << ptr2 << endl;  // 1
	cout << &ptr2 << endl; // address

	int a = 1, b = 2, c = 3;
	int *ptr11 = &a;
	int *ptr22 = &b;
	int *ptr33 = &c;

	cout << ptr11 << endl;
	cout << ptr22 << endl;
	cout << ptr33 << endl;

	int *arr00[] = {ptr11, ptr22, ptr33};
	int **p = arr00;
	// cout << &ptr11 << endl;
	cout << **p << endl;
	cout << *p << endl;
	cout << p << endl;
	cout << p[1] << endl;

	cout << arr00 << endl;
	cout << arr00[0] << endl;
	cout << **arr00 << endl;

	return 0;
}
