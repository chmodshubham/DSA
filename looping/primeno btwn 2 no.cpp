#include <iostream>
using namespace std;

int main()
{
	int a,b,i,n;
	cout << "1st number:";
	cin >> a;
	cout << "2nd number:";
	cin >> b;
	cout << "The prime nos. between "<< a << " and " << b << "are:";
	for (i>a;i<b;i++)
	{
		for(n=2;n<i;n++)
		{
			if (i%n==0)
			{
				break;
			}
		
		}
		if(n==i)
		{
			cout << i << " ";
		}
	}
	return 0;
}
