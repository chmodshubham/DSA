#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	char arr[n+1];
	cin >> arr;
	bool flag=1;
	int i=0;
	while(i<=n)
	{
		if(arr[i]==arr[n-1])
		{
			n--;
			i++;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		cout << "a palindrome ." << endl;
	}
	else
	{
		cout << " Not a palindrome ." << endl ;
	}
	return 0;
}
