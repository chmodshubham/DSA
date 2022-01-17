#include <iostream>
using namespace std;

int setBit(int n, int pos)
{
	return ((n & (1<<pos)) != 0);
}

void uniqueno(int arr[],int n)
{
	int xorsum = 0;
	for(int i=0;i<n;i++)
	{
		xorsum=xorsum^arr[i];
		//check unique_no._in_an_array_by_bitmanipulation.cpp for understanding this part.
	}
	int tempxor = xorsum;
	int setbit=0;
	int pos=0;
	while(setbit != 1)
	{
		setbit= xorsum & 1;
		pos++;
		xorsum = xorsum >> 1;
	}
	int newxor = 0;
	for(int i=0;i<n;i++)
	{
		if(setBit(arr[i],pos-1))
		{
			newxor=newxor ^ arr[i];
		}
	}
	
	cout << newxor << endl;
	cout << (tempxor ^ newxor) << endl;
}

int main()
{
	int arr[7]={2,2,6,3,6,4};
	uniqueno(arr,6);
	
}
