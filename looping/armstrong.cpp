#include <iostream>
using namespace std;

int main()
{
	for (int i = 100; i <= 500; i++)
	{
		int sum=0;
		int j=i;
		while (j != 0)
		{
	      int r = j%10;
	     	sum += r*r*r;
	    	j = j/10;
	    /*	if(j==0)         // no need to write
	    	{
	    		break;
			} */
		}
	   if(sum == i)
	   {
	   	cout << i << endl;
	   }
	 /*  else                //no need to write this.// automatically understand by the system.
	   {
	   	continue;
	   } */
	  	
	}
	
	return 0;
}
