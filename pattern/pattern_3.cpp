#include <iostream>
using namespace std;

int main()
{
	int i=0,j=0;
    for(i=5;i>=1;i--) 
    {
    	for (j=1;j<=i;j++)
    	{
		   	cout << "*";
		}
		cout << endl;
	}	
	return 0;
}
