#include <iostream>
using namespace std;

int main()
{
	int d, pm;// d is date and pm is pocket money
	pm=5000;
	for(d=1;d<=30;d++)
	{
		if (d%2==0)
		{
			continue;//skip to the next iteration of the loop
		}
		
		if (pm==0)
		{
			break;// terminate the loop
		}
		cout << "She will go out for date on " << d <<endl;
		pm=pm-500;
		cout << pm << endl;
	}
	return 0;
}
