#include <iostream>
using namespace std;

int main()
{
	int n;
	for(n=1;n<=100;n++)
	{
		if (n%10==1)
		{
			cout << endl;
		}
		
		if (n%3==0)
		{
			continue;//didn't print the output if it satisfied the given condition.
		}
		cout << n <<" ";
	}
	return 0;
}
