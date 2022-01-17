#include <iostream>
using namespace std;

int main()
{
	int i;
	for(i=1;i>=0;i++)
	{
		if(i%2==1)
		{
			cout << "Devils never born.\n";
		}
		else
		{
			cout << "They are created.\n";
		}
	}
	return 0;
}
