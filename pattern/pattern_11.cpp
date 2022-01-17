#include <iostream>
using namespace std;

int main()
{
	int i,j;
/*	for(i=1;i<=5;i++)
	{
		int n=0;
		for(j=1;j<=5;j++)
		{
			if(j<=5-i)
			{
				cout << " ";
			}
			else
			{
			n+=1;
			cout << n << " ";
		    }
		}
	    cout << endl;	  
    }*/
    for(i=1;i<=5;i++)
	{
		for(int s=1;s<=5-i;s++)
		{
			cout << " ";
		}
		int n=0;
		for(j=1;j<=i;j++)
		{
		
			n+=1;
			cout << n << " ";
		  
		}
	    cout << endl;	
        
    }
    
	return 0;
}
