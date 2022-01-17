#include <iostream>
/*#include <cmath>*/
using namespace std;

void subset(int arr[], int n)
{
	for(int i=0; i < (1<<n) /*pow(2,n)*/;i++)
	{
		for(int j=0;j<n;j++)
		{
			if((i & (1<<j)) != 0)
			{
				cout << arr[j] << " ";
			}
			
		}
		cout << endl;
	}
}

int main()
{
	int arr[4]={10,20,30};
	subset(arr,3);
	return 0;
}
