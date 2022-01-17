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
	return 0;
}
